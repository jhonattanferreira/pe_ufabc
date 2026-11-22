#include <stdio.h>

int main()
{
    float peso = 0;
    float altura = 0;

    scanf("%f", &peso);
    scanf("%f", &altura);

    float imc = (peso / (altura * altura));
    
    if(imc < 18.5){
        printf("baixo");
    } else if ((imc >= 18.5) && (imc <= 24.9)){
        printf("normal");
    } else {
        printf("alto");
    }

    return 0;
}
