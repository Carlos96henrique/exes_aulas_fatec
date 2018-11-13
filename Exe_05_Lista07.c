#include <stdio.h>
#include <math.h>
float volume(float raio);
int main(){
	float r;
	
	printf("Ditgite o raio para uma esfera\n");
	scanf("%f",&r);
	
	volume(r);
	
	return 0;
	
}
float volume(float raio){
	float v;
	
	v=(4*3.14*(pow(3,raio)))/3;
	
	printf("O volume dessa esfera e %f",v);
}
