#include <stdio.h>

typedef struct tData {
    int dia, mes, ano;
} Data;

int isBissexto(int ano) {

    if (ano % 400 == 0) {
        return 1;
    } else if ((ano % 4 == 0) && (ano % 100 != 0)) {
        return 1;
    } else {
        return 0;
    }
}

int isValida(Data dt) {

    int dias = 0;

    if (dt.mes < 1 || dt.mes > 12) {
        return 0;
    }

    if (dt.mes == 2) {
        if (isBissexto(dt.ano) == 1) {
            dias = 29;
        } else {
            dias = 28;
        }
    } else if (dt.mes == 4 || dt.mes == 6 || dt.mes == 9 || dt.mes == 11) {
        dias = 30;
    } else {
        dias = 31;
    }

    if (dt.dia < 1 || dt.dia > dias) {
        return 0;
    }

    return 1;
}

int main() {

    int n = 0;
    Data dt;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d %d %d", &dt.dia, &dt.mes, &dt.ano);

        if (isValida(dt) == 1) {
            printf("DATA VALIDA\n");
        } else {
            printf("DATA INVALIDA\n");
        }
    }

    return 0;
}
