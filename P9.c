#include <stdio.h>
#include <stdlib.h>

int aleatorio();

int main(){
  printf("\t------------------\n");
  printf("\tJUEGO MULTIPLACIÓN\n");
  printf("\t------------------\n");
  int n1, n2, respuesta, correcta;
  char continuar[1]="s";
  srand(time(NULL));
  n1 = aleatorio();
  n2 = aleatorio();
  while(continuar[0] == 's'){
    printf("¿Cuánto es %d veces %d?\n R:", n1, n2);
    scanf("%d", &respuesta);
    correcta = n1 * n2;
    if(respuesta == correcta){
      printf("Muy bien!\n");
    }else{
      printf("No, por favor intenta nuevamente\n");
      continue;
    }
    printf("¿Desea continuar? s/n: ");
    scanf("%s",continuar);
    n1 = aleatorio();
    n2 = aleatorio();
  }
  return 0;
}

int aleatorio(){
  return rand()%10;
}
