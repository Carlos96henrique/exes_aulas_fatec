#include <stdio.h>
int main(){
	int n1, *p1, aux1;
	float n2, *p2, aux2;
	char letter, *pletter, auxl;
	
	scanf("%d",&n1);
	scanf("%f",&n2);
	scanf(" %c", &letter);
	printf("Antes da alteracao: %d, %.1f, %c\n",n1,n2 ,letter);
	p1=&n1;
	p2=&n2;
	pletter=&letter;
	
	*p1=*p1*2;
	*p2=*p2-1;
	*pletter='A';
	
	printf("Depois da alteracao: %d, %.1f, %c\n", n1, n2, letter);
	
	
	return 0;
}
