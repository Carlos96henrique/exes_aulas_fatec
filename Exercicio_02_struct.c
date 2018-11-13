#include <stdio.h>
#include <conio.h>
#define T 1
//Exercicios de Struct//
int main (){
	int i;
	struct registro{
		char nome[10];
		char sobrenome[30];
		int rg;
		int dia, mes, ano;
		float salario;
	}empregados[T];
	//Registrar funcionario//
	printf("Registre seus funcionarios\n");
	for (i=0; i<T; i++){
		fflush(stdin);
		gets(empregados[i].nome);
		fflush(stdin);
		gets(empregados[i].sobrenome);
		scanf("%d",&empregados[i].rg);
		scanf("%d",&empregados[i].dia);
		scanf("%d",&empregados[i].mes);
		scanf("%d",&empregados[i].ano);
		scanf("%f",&empregados[i].salario);
	}
	//Exibir funcionarios registrados//
	for (i=0; i<T; i++){
		printf("O %d empregado registrado\n",i);
		printf("Nome: %s\n",empregados[i].nome);
		printf("Sobrenome:%s\n",empregados[i].sobrenome);
		printf("RG:%d\n",empregados[i].rg);
		printf("Data de adimissao: %d/%d/%d \n",empregados[i].dia, empregados[i].mes, empregados[i].ano);
		printf("Salario atual:%.2f\n",empregados[i].salario);
	}
	return 0;
}

