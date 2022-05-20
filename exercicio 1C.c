#include <stdio.h>

int main(){
	float v1,v2,v3,resultado;
	printf("informe valor 1:");
	scanf("%f",&v1);
	printf("informe valor 2:");
	scanf("%f",&v2);
	printf("informe valor 3:");
	scanf("%f",&v3);
	resultado = v1+v2+v3;
	printf("Resultado da soma:%.2f",resultado);
	return 0;
}