#include <stdio.h>

float harmonica(int n){
    if (n == 0)
    {       
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }
    
    return harmonica(n - 1) + (1.f / n);
    
}

int main()
{
    int n = 0;
    float result = 0;

    scanf("%d", &n);

    result = harmonica(n);

    printf("%.2f", result);

    return 0;
}
