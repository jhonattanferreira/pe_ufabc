#include <stdio.h>
typedef struct tData {
    int dia, mes, ano;
} Data;
int isBissexto(int ano) {
    if (ano % 400 == 0) { return 1; }
    if (ano % 4 == 0 && ano % 100 != 0) { return 1; }
    return 0;
}
int diasDoMes(int mes, int ano) {
    switch (mes) {
        case 2:
            if (isBissexto(ano)) { return 29; }
            return 28;
        case 4: case 6: case 9: case 11:
            return 30;
        default:
            return 31;
    }
}
int isValida(Data dt) {
    if (dt.mes < 1 || dt.mes > 12) { return 0; }
    if (dt.dia < 1 || dt.dia > diasDoMes(dt.mes, dt.ano)) { return 0; }
    return 1;
}
int main()
{
    int i, n;
    Data dt;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &dt.dia);
        scanf("%d", &dt.mes);
        scanf("%d", &dt.ano);
        if (isValida(dt)) { printf("DATA VALIDA\n"); }
        else { printf("DATA INVALIDA\n"); }
    }
    return 0;
}
