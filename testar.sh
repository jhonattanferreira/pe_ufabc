#!/usr/bin/env bash
# Uso: ./testar.sh 45.c [casos.txt]
# Compila o .c, roda cada caso de casos.txt via stdin e compara a saída.
#
# Formato de casos.txt:
#   entrada...
#   ---
#   saída esperada...
#   ===
#   (próximo caso)

set -u
src="${1:?uso: $0 arquivo.c [casos.txt]}"
casos="${2:-$(dirname "$0")/casos.txt}"
tmp="$(mktemp -d)"
trap 'rm -rf "$tmp"' EXIT

cc -Wall -Wextra -O2 -o "$tmp/bin" "$src" -lm || { echo "ERRO DE COMPILAÇÃO"; exit 1; }

# separa os casos em tmp/N.in e tmp/N.out
awk -v d="$tmp" '
  BEGIN { n = 1; f = d "/" n ".in"; printf "" > f }
  /^\/\// { next }   # linhas começando com // são comentários
  /^---[[:space:]]*$/ { f = d "/" n ".out"; printf "" > f; next }
  /^===[[:space:]]*$/ { n++; f = d "/" n ".in"; printf "" > f; next }
  { print > f }
' "$casos"

normaliza() { sed -e 's/[[:space:]]*$//' | sed -e :a -e '/^\n*$/{$d;N;ba' -e '}'; }

ok=0; total=0
limite=""; command -v timeout >/dev/null && limite="timeout 5"
n=0
while [ -f "$tmp/$((n + 1)).in" ]; do
  n=$((n + 1)); in="$tmp/$n.in"; out="$tmp/$n.out"
  [ -f "$out" ] || continue   # ignora bloco sem '---' (ex.: '===' no fim)
  total=$((total + 1))
  got="$($limite "$tmp/bin" < "$in" 2>&1 | normaliza)"; rc=${PIPESTATUS[0]}
  exp="$(normaliza < "$out")"
  if [ "$got" == "$exp" ]; then
    ok=$((ok + 1)); echo "✔ caso $n"
  else
    echo "✘ caso $n$( [ "$rc" = 124 ] && echo ' (timeout)')"
    echo "  entrada:";  sed 's/^/    /' "$in"
    echo "  esperado:"; echo "$exp" | sed 's/^/    /'
    echo "  obtido:";   echo "$got" | sed 's/^/    /'
  fi
done

echo; echo "$ok/$total passaram"
[ "$ok" -eq "$total" ]
