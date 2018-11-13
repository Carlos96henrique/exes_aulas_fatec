#include <stdio.h>
#include <math.h>
int quadrado(int number);
int main(){
	int num;
	
	do{
		printf("Digite um numero\n");
		scanf("%d",&num);
	}while(num<0);
	quadrado(num);
	return 0;
}
int quadrado(int number){
	
	if (number/(sqrt(number))==sqrt(number)){
		printf("Quadrado perfeito\n");
	}
	else{
		printf("Nao e quadrado perfeito\n");
	}
}
