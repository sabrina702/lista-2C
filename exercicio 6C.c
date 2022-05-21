#include <stdio.h>
#include <math.h>

int main(){
	float opcao,n1,n2,soma,raiz;
	printf("Menu de opcoes: \n1-Somar dois numeros.  \n2-Raiz quadrada de um numero.  \nDigite a opcao desejada:");
	scanf("%f",&opcao);
	if(opcao==1){
		printf("Informe valor 1:");
		scanf("%f",&n1);
		printf("Informe valor 2:");
		scanf("%f",&n2);
		soma = n1+n2;
		printf("Resultado:%.2f",soma);
	}
		else if(opcao==2){
		printf("Informe valor:");
		scanf("%f",&n1);
		raiz = sqrt(n1);
		printf("raiz de %.2f: %.2f",n1,raiz);
		}
		else{
			printf("opcao invalida");
		}
	return 0;
}