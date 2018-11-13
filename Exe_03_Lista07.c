#include <stdio.h>
#include <stdlib.h>
int positornegat(int valor);
int main(){
	int num;
	
	printf("Digite um numero\n");
	scanf("%d",&num);
	positornegat(num);
	return 0;
}
int positornegat(int valor){
	
	if (valor>0){
		printf("Positivo\n");
	}
	else if (valor<0){
		printf("Negativo");
	}
	else{
		printf("0");
	}
}
