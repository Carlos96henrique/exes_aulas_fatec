#include <stdio.h>
#define T 4
int main(){
	int mat [T][T], i,j, cont;
	cont=0;
	for (i=0; i<T;i++){
		for(j=0;j<T;j++){
			scanf("%d", &mat[i][j]);
			if (mat[i][j]>10){
				cont++;
			}
		}
	}
	printf("Foram digitados %d valores maiores que 10 \n",cont);
	return 0;
}
