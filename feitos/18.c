#include <stdio.h>

int main()
{
    float a = 0;
    float b = 0;

    scanf("%f %f", &a, &b);

    float x = -b / a;

    printf("%.2f\n", x);

    return 0;
}
