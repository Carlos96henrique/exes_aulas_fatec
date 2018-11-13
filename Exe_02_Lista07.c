#include <stdio.h>
#include <stdlib.h>
int data(int pdia, int pmes, int pano);
int main(){
	int dia, mes, ano;
	
	printf("digite o dia:\n");
	scanf("%d",&dia);
	printf("Digite o mes\n");
	scanf("%d",&mes);
	printf("digite o ano\n");
	scanf("%d",&ano);
	
	data(dia,mes,ano);
	
	return 0;
}
int data(int pdia, int pmes, int pano){
	char* meses[]= {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
	
	printf("%d %s %d",pdia,meses[pmes-1], pano);
}
