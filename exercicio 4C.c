#include <stdio.h>

int main(){
	float salario,prestacao,valor;
	printf("Informe o salario:");
	scanf("%f",&salario);
	printf("Valor da prestacao pretendida:");
	scanf("%f",&prestacao);
	valor = (salario*30)/100;
	if(prestacao<=valor){
		printf("Imprestimo pode ser concedido!");
	}
		else{
			printf("Imprestimo nao pode ser concedido!");
		} 
	return 0;
}