#include <stdio.h>
int main(){
	char frs[100];
	int cont;
	printf("Digite uma frase\n");
	gets(frs);
	for(cont=0; frs[cont]!='\0'; cont++){
	}
	printf("O numero de caracteres e %d", cont);
	return 0;
}
