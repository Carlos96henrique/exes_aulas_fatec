#include <stdio.h>
#include <stdlib.h>
#define y 3
void F1(int (*mat)[3], int *p1, int *p2, int *p3);
int main(){
	int N, d, m, a;
	int mat[3][3], i, j, s1, s2, s3;
	scanf("%d",&N);
	while(N!=1 && N!=2 && N!=3){
		printf("Opcao invalida");
		scanf("%d",&N);
	}
	if (N==1){
		printf("Digite os valores para matriz\n");
		for (i=0; i<y; i++){
			for (j=0; j<y; j++){
				scanf("%d",&mat[i][j]);
			}	
		}
		 F1(mat, &s1, &s2, &s3);
		printf("A soma das linhas da matriz: %d, %d e %d\n",s1, s2,s3);
	}
	return 0;
}
void F1(int (*mat)[3], int *p1, int *p2, int *p3){
	int i, j;
	int soma1=0, soma2=0, soma3=0;
	for (i=0; i<y; i++){
		for(j=0; j<y; j++){
			if (i==0){
				soma1=soma1+mat[i][j];
			}
			else if(i==1){
				soma2=soma2+mat[i][j];
			}
			else{
				soma3=soma3+mat[i][j];
			}	
		}
	}
	*p1=soma1;
	*p2=soma2;
	*p3=soma3;
}

