#include <stdio.h>
#include <string.h>

int reverse(int);

int main(){
  printf("--------------------------------\n");
  printf("PROGRAMA PARA INVERTIR UN NÚMERO\n");
  printf("--------------------------------\n");
  int numero;
  printf("Digite número: ");
  scanf("%d", &numero);
  printf("Su número al revés es: %d", reverse(numero));
  return 0;
}

int reverse(int n){
  int  mod, reverse=0;
  while(n != 0){
    mod = n%10;
    n = n/10;
    reverse =reverse * 10 + mod;
  }
  return reverse;
}
