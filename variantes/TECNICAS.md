# Variantes para teste do detector

Cada `variantes/NN.c` é uma versão de `by_claude/NN.c` com 1–2 transformações
sutis e comportamento idêntico (verificado nos exemplos de `a_fazer/`).

Legenda:

- **P**: aritmética de ponteiros no lugar de indexação
- **C**: troca de estrutura de controle (if→ternário/switch, for→while, break→condição)
- **M**: macro `#define` / `typedef`
- **O**: protótipos no topo e definições depois do `main` (ordem invertida)
- **S**: `<string.h>` no lugar de laço manual
- **R**: referência ↔ retorno ↔ variável global

| Ex. | Técnica | O que mudou |
|-----|---------|-------------|
| 51 | P | `vetorA[j]` → `*(vetorA + j)` no laço interno |
| 52 | P | impressão percorre `int *p` |
| 53 | C | laço reverso `for` → `while`; `== false` → `!` |
| 54 | C | if/else do merge → ternário com `i++`/`j++` |
| 55 | O, R | trocas inline → `trocar(int *, int *)` com protótipo, definida após `main` |
| 56 | P | `*(vetorA + i)` na comparação |
| 57 | C | laço externo de saída `for` → `while` |
| 58 | P | `matriz[i][i]` → `*(*(matriz + i) + i)` |
| 59 | C | if aninhado → ternário `esperado`; saída com ternário |
| 60 | O | verificação extraída para `ehSimetrica` (protótipo + definição após `main`) |
| 61 | M | `#define OPOSTO(i, n)` |
| 62 | R | `soma` vira variável global |
| 63 | C | laço interno `for` → `while` |
| 64 | O | `somaColuna` com protótipo, definida após `main` |
| 65 | C | if → ternário |
| 66 | P | ponteiro de linha `*(linha + j)` |
| 67 | M | `#define MAIOR_QUE(a, b)` |
| 68 | C | cadeia if/else if → expressão booleana `vai_direita` |
| 69 | C | primeiro laço da espiral `for` → `while` |
| 70 | O | checagem de vizinhos extraída para função com protótipo |
| 71 | R | `trocar(int *, int *)` → globais `x`, `y` e `trocar()` sem parâmetros |
| 72 | R | `void soma(..., int *resultado)` → `int soma(a, b)` |
| 73 | P | `scanf(..., vetor + i)` e soma com `int *p` |
| 74 | M | `typedef int *Linha;` |
| 75 | S | laço manual → `strlen` |
| 76 | P | cópia com `*destino++ = *origem++` |
| 77 | S | laços manuais → `strlen` + `memcpy` |
| 78 | C | cadeia if/else if → ternário aninhado |
| 79 | C | if/else de saída → ternário |
| 80 | P | `vetor + i` / `*(vetor + i)` |
| 81 | C | laço `for` → `while`; saída com ternário |
| 82 | O, R | troca inline → `trocar(int *, int *)` com protótipo, definida após `main` |
| 83 | M, C | `#define TROCA(a, b)`; if/else da mediana → ternário |
| 84 | C | `break` → condição extra no `while` |
| 85 | P | `imprimirNome` percorre `char *p` |
| 86 | P | `compara` com ponteiros (`*s1`, `s1++`) |
| 87 | O | busca extraída para `buscar` com protótipo |
| 88 | M | `#define NAO_ENCONTRADO -1` |
| 89 | C | laço com flag `existe` → `while` de busca + `j == n` |
| 90 | S | `compara` manual removida → `strcmp` |
| 91 | C | cadeia if/else if → `switch` |
| 92 | C | if/else if → expressão booleana + ternário |
| 93 | C | cadeia de meses → `switch` com cases agrupados |
| 94 | O | protótipos no topo, funções após `main` em ordem inversa |
| 95 | R | lógica de `main` → `void diaAnterior(Data *dt)` com `->` |
| 96 | O | protótipos no topo, funções após `main` em ordem inversa |
