#include <stdio.h>
int main(){
	char palavra[20];
	
	printf("Digite um nome de até 20 letras\n");
	gets(palavra);
	if(palavra[0]=='A'|| palavra[0]=='a'){
		puts(palavra)
	}
	return  0;
}
