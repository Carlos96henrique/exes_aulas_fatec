#include <stdio.h>
#include <conio.h>
/*Faça um programa que leia 2 valores inteiros e chame uma função que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.*/
void troca(int *pa, int *pb);
int main(){
	int a, b;
	printf("Digites dois valores para serem trocados:\n");
	scanf("%d%d",&a, &b);
	troca(&a, &b);
	printf("Os valores trocados %d e %d ",a,b);
	return 0;
}
void troca(int *pa, int *pb){
	int aux;
	aux=*pa;
	*pa=*pb;
	*pb=aux;
	return;
}
