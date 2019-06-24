#include <stdio.h>

int main(){
  printf("-----------------------------------------------\n");
  printf("PROGRAMA PARA GENERAR LAS TABLAS DE MULTIPLICAR\n");
  printf("-----------------------------------------------\n");
  int n;
  printf("Ingrese número de tablas de multiplicar que quiere: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= 10; j++){
      printf("%d x %d = %d\n",i, j, i*j);
    }
    printf("\n");
  }
  return 0;
}
