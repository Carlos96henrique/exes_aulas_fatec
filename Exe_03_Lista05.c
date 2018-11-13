#include <stdio.h>
int main(){
	char palavra[20],i;
	
	printf("Digite um nome de até 20 letras\n");
	gets(palavra);
	for(i=0;i<4;i++){
		printf("As quatro primeiras letras do seu nome sao %c\n", palavra[i]);
	}
	return  0;
}
