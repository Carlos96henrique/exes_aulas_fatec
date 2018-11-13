#include<stdio.h>
#define T 5
int main(){
	int mat[T][T], i,j, diag, demais;
	
	for(i=0;i<T;i++){
		for(j=0;j<T;j++){
			if (i==j){
				mat[i][j]=1;
			}
			else {
				mat[i][j]=0;
			}
		}
		
	}
	for (i=0;i<T;i++){
		for(j=0;j<T;j++)
			printf("%3d", mat[i][j]);
		printf("\n");
	}
	return 0;
	
}
