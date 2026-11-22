#include <stdio.h>

int main()
{
    int num = 0;

    scanf("%d", &num);

    if((num % 3 == 0) || (num % 5 == 0)){
        printf("sim");
    } else {
        printf("nao");
    }

    return 0;
}
