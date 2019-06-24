#include <stdio.h>

int multiplo(int, int);

int main(){
  int pares,num,result;
  printf("-------------------------------------------------------\n");
  printf("PROGRAMA PARA ANALIZAR SI UN NÚMERO ES MULTIPLO DE OTRO\n");
  printf("-------------------------------------------------------\n");
  printf("Escriba la cantidad de pares a analizar: ");
  scanf("%d",&pares);
  int arr[pares*2+1];
  for(int i = 0; i<pares*2;i++){
    printf("Digite numero:%d--> ",i+1);
    scanf("%d",&num);
    arr[i]=num;
  }
  for(int j = 0; j< pares*2;j+=2){
    result = multiplo(arr[j], arr[j+1]);
    if(result == 1){
      printf("El número %d es multiplo de %d\n",arr[j+1],arr[j]);
    }else{
      printf("El numero %d no es multiplo de %d\n",arr[j+1],arr[j]);
    }
  }
  return 0;
}

int multiplo(int x, int y){
  int mul = y%x;
  if (mul == 0){
    return 1;
  }else
    return 0;
}
