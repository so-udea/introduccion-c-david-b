#include <stdio.h>
#include <string.h>

int main(){
  printf("----------------------------------------------------\n");
  printf("PROGRAMA PARA GENERAR SECUENCIA BINARIA EN RENGLONES\n");
  printf("----------------------------------------------------\n");
  int renglones;
  int bin = 1;
  printf("Digite número de renglones que desea: ");
  scanf("%d", &renglones);
  char arr[renglones+1];
  for(int i = renglones;i >= 1 ;i--){
    arr[i]=bin;
    for(int j = i; j<=renglones;j++){
    printf("%d",arr[j]);
    }
    printf("\n");
    if(bin == 1)
      bin = 0;
    else
      bin = 1;
  }
  return 0;
}
