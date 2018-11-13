#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[50], sexo;
	int idade;
	idade = 0;
	printf("Digite seu Nome, sexo e idade:\n");
	gets(nome);
	scanf(" %c",&sexo);
	scanf("%d", &idade);
	if(sexo=='F' || sexo=='f' && idade < 25){
		printf("%sACEITA\n",nome);
	}
	else{
		printf("NAO ACEITA\n", nome);
	}
	return 0;
}
