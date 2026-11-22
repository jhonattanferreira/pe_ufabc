#include <stdio.h>

int main()
{
    int idade = 0;

    scanf("%d", &idade);

    if(idade < 12){
        printf("crianca");
    } else if ((idade >= 12) && (idade <= 17)){
        printf("adolescente");
    } else {
        printf("adulto");
    }

    return 0;
}
