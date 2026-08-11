#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main (int argc, char *argv[]) {
	float raio, area, raioQuadrado;
	
	printf("Insira o valor de R: \n");
	
	scanf("%f", &raio);	
	
	raioQuadrado = raio*raio;
	
	area = pi * raioQuadrado;
	
	printf("A area do circulo de raio %f = %f \n", raio, area);
	
	
	float areas,baseMenor, baseMaior, altura;
	

	printf("Area do trapezio descendente \n");
	printf("Insira a Base Menor: \n");
	scanf("%f", &baseMenor);
	
	printf("Insira a Base Maior: \n");
	scanf("%f", &baseMaior);
	
	printf("Insira a Altura: \n");
	scanf("%f", &altura);
	
	areas = (baseMaior + baseMenor) * altura /2; 
	
	printf("Resultado: %f", areas);
	return 0;
}
