#include <stdio.h>

int main(){
	int v1,v2;
	printf("informe valor 1:");
	scanf("%d",&v1);
	printf("informe valor 2:");
	scanf("%d",&v2);
	if(v1>v2){
		printf("%.1d - %.1d",v1, v2);
	}
		else{
		printf("%.1d - %.1d",v2, v1);
		}
	return 0;
	
	}