#include <iostream>
#include <math.h>

int main(int argc, char** argv) {
/*	
  int n, res;
  int bit_64, bit_32, bit_16, bit_8, bit_4, bit_2;
  printf("Insira o valor: ");
  scanf("%d", &n);
  
  bit_64 = n%2;
  res = n/2;
  
  bit_32 = res%2;
  res = res/2;
  
  bit_16 = res%2;
  res = res/2;
  
  bit_8 = res%2;
  res = res/2;
  
  bit_4 = res%2;
  res = res/2;
  
  bit_2 = res%2;
  res = res/2;
  
  printf("O numero %d em bin: %d%d%d%d%d%d%d", n, res%2, bit_2, bit_4, bit_8, bit_16, bit_32, bit_64);
  
  
  
  int x1, x2, y1, y2, p1, p2;
  float dis;
  
  printf("insira o valor do par ordenado p1(x1,y1)")
  scanf("%d",&x1);
  scanf("%d",&y1);
  
   printf("insira o valor do par ordenado p2(x2,y2)")
  scanf("%d",&x2);
  scanf("%d",&y2);

  p1 = pow(x2-x1,2);
  p2 = pow(y2-y1,2);
  dist = sqrt(p1 + p2);


  printf("a distancia entre P1 e P2 = &f", dis); 



	int a, b, c, maior_tempo, maior;
	printf("Insira os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	maior_tempo = ((a + b) + abs(a - b)) / 2;
	maior = ((maior_tempo + c) + abs(maior_tempo - c)) / 2;
	printf("O maior valor entre %d, %d e %d é: %d\n", a, b, c, maior);

	*/
	
/*	int a, b, c;
	int resultado;
	
	printf("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a>b){
		resultado = a;
	}else{
		resultado = b;
	}
	if (c>resultado){
		resultado = c;
	}

	printf("%d é o maior", resultado);
*/
	int n, r;
	printf("Insira o valor: ");
	scanf("%d", &n);
	
	if(n>0){
		r = 1/n;
	}else{
		r = n*n/
	}
	printf("%f", r);
  
 	
	return 0;
}
