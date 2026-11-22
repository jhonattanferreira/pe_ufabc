#include <stdio.h>

int main(){
	int a;
	int b;
	int resto;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);

	result = a / b;
	resto = a % b;

	printf("%d ", result);
	printf("%d", resto);
}
