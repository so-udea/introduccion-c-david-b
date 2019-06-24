#include <stdio.h>

float factorial(int);
float potencia(int, int);

int main(){
  printf("-------------------------------------------------------------\n");
  printf("PROGRAMA PARA CALCULAR SUMA DE SERIE X^N/N! (CON N DE 2 EN 2)\n");
  printf("-------------------------------------------------------------\n");
  int n, x, doble = 0;
  float term, result = 0;
  printf("Digite el valor de x: ");
  scanf("%d", &x);
  printf("Digite numero de términos: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    term = potencia(x,doble) / factorial(doble);
    if(i%2==0)
      result += term;
    else
      result -= term;

    printf("%d^%d / %d!", x, doble, doble);
    if(i%2==1 && i != n-1)
      printf(" + ");
    else if(i%2==0 && i!=n-1)
      printf(" - ");
    
    doble += 2;
  }
  printf(" = %f",result);
  return 0;
}

float factorial(int n){
  if(n == 0)
    return 1;
  else
    return n*factorial(n-1);
}

float potencia(int x, int n){
  if(n == 0)
    return 1;
  else
    return x*potencia(x,n-1);
}
