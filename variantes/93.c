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

    switch (dt.mes) {
        case 2:
            dias = (isBissexto(dt.ano) == 1) ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        default:
            return 0;
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

        scanf("%d", &dt.dia);
        scanf("%d", &dt.mes);
        scanf("%d", &dt.ano);

        if (isValida(dt) == 1) {
            printf("DATA VALIDA\n");
        } else {
            printf("DATA INVALIDA\n");
        }
    }

    return 0;
}
