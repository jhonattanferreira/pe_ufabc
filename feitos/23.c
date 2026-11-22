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
    int contador = 0;

    for(int i=1; i<=n; i++){
        result = par(i);
        
        if(result == true){
            contador++;
        } else{
            continue;
        }
    }

    printf("%d", contador);

    return 0;
}
