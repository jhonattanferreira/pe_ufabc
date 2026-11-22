#include <stdio.h>

int main(){

	float area;
	float pi;
	int raio;

	scanf("%d", &raio);

	pi = 3.14159;

	area = pi * (raio * raio);

	printf("%.2f", area);

}
