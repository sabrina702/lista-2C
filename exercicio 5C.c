#include <stdio.h>

int main(){
	float n1,n2,n3,media;
	printf("Informe NOTA 1:");
	scanf("%e",&n1);
	printf("Informe NOTA 2:");
	scanf("%e",&n2);
	printf("Informe NOTA 3:");
	scanf("%e",&n3);
	media = (n1+n2+n3)/3;
	if(media>=8 && media<=10){
		printf("desempenho A");
	}
		else if(media>=7 && media<=8){
		printf("desempenho B");
	}
		else if(media>=6 && media<=7){
		printf("desempenho C");
	} 
		else if(media>=5 && media<=6){
		printf("desempenho D");
	} 
		else if(media>=0 && media<=5){
		printf("desempenho E");
	}
	return 0;
}
