#include <stdio.h>

int tabuada(int n, int i){

    return i * n;
}

int main()
{
    
    int n = 0;

    scanf("%d", &n);

    int result = 0;

    for(int i=1; i<=10; i++){
        result = tabuada(n, i);
    
        printf("%d ", result);
    }

    return 0;
}
