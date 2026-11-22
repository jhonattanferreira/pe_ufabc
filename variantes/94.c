#include <stdio.h>

typedef struct tData {
    int dia, mes, ano;
} Data;

int diasDoMes(int mes, int ano);
int isBissexto(int ano);

int main() {

    Data dt;

    scanf("%d", &dt.dia);
    scanf("%d", &dt.mes);
    scanf("%d", &dt.ano);

    dt.dia++;

    if (dt.dia > diasDoMes(dt.mes, dt.ano)) {
        dt.dia = 1;
        dt.mes++;
    }

    if (dt.mes > 12) {
        dt.mes = 1;
        dt.ano++;
    }

    printf("%d %d %d\n", dt.dia, dt.mes, dt.ano);

    return 0;
}

int diasDoMes(int mes, int ano) {

    if (mes == 2) {
        if (isBissexto(ano) == 1) {
            return 29;
        } else {
            return 28;
        }
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

int isBissexto(int ano) {

    if (ano % 400 == 0) {
        return 1;
    } else if ((ano % 4 == 0) && (ano % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}
