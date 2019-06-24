#include <stdio.h>


int main(){
  int ventas = 1;
  float com;
  while (ventas > 0){
    printf("-----------------------------------------------\n");
    printf("PROGRAMA PARA CALCULAR COMISIONES DE UN VENDEDOR\n");
    printf("------------------------------------------------\n");
    printf("Digite cantidad de ventas para calcular comision o 0 para terminar: ");
    scanf("%d",&ventas);
    
    while(ventas < 0){
      printf("Valor no válido\n");
      printf("Digite cantidad de ventas para calcular comision o 0 para terminar: ");
      scanf("%d",&ventas); 
    }
    
    if(ventas == 0){
      return 0;
    }
      
    if (ventas <=20000){
      com = ventas * 0.05;
      }
    else if(ventas <= 50000){
      com = ventas * 0.07 + 1000;
    }else{
      com = ventas * 0.1 + 3100;
    }
    printf("\nLa comision para el vendedor es de: %.2f\n", com);

  }
  return 0;
}
