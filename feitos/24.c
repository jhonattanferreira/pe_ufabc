#include <stdio.h>
#include <stdbool.h>

bool par(int n){

    if( n % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main()
{
    
    int n = 0;

    scanf("%d", &n);

    int result = 0;
    int soma = 0;

    for(int i=1; i<=n; i++){
        result = par(i);
        
        if(result == true){
            soma += i;
        } else{
            continue;
        }
    }

    printf("%d", soma);

    return 0;
}
