#include <stdio.h>

int potencia(int, int);

int main(){
  printf("-----------------------------------------------\n");
  printf("PROGRAMA PARA CALCULAR PROGRESION GEOMETRICA DE X^(0...N)\n");
  printf("------------------------------------------------\n");
  int x, n, result;
  int suma = 0;
  printf("Escriba el numero base y su exponente: ");
  scanf("%d %d",&x,&n);
  for(int i = 0; i <= n; i++){
    printf("%d^%d", x, i);
    suma+=potencia(x,i);
    if(i != n)
      printf(" + ");
  }
  printf(" = ");
  for(int i = 0; i <= n; i++){
    result = potencia(x,i);
    printf("%d",result);
    if(i != n)
      printf(" + ");
  }
  printf(" = %d",suma);
  return 0;
}
int potencia(int x, int n){
  if(n==0)
    return 1;
  else
    return x*potencia(x, n-1);
}
