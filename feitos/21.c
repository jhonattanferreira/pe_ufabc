#include <stdio.h>

int fatorial(int n){

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    return n * fatorial(n-1);
}

int main()
{
    
    int n = 0;

    scanf("%d", &n);

    int result = fatorial(n);

    printf("%d", result);

    return 0;
}
