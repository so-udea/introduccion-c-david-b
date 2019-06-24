#include <stdio.h>
#include <stdlib.h>

int aleatorio();
void respuestaCorrecta();
void respuestaIncorrecta();

int main(){
  printf("\t---------------------------\n");
  printf("\tJUEGO MULTIPLACIÓN MEJORADO\n");
  printf("\t---------------------------\n");
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
      respuestaCorrecta();
    }else{
      respuestaIncorrecta();
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

void respuestaCorrecta(){
  int resp = rand()%4 + 1;
  switch(resp){
  case 1:
    printf("Muy bien!\n");
    break;
  case 2:
    printf("Excelente!\n");
    break;
  case 3:
    printf("Buen trabajo!\n");
    break;
  case 4:
    printf("Sigue haciéndolo bien!\n");
    break;
  }
}
void respuestaIncorrecta(){
  int resp = rand()%4 + 1;
  switch(resp){
  case 1:
    printf("No. Por favor trata de nuevo.\n");
    break;
  case 2:
    printf("Incorrecto. Trata una vez más.\n");
    break;
  case 3:
    printf("No te rindas!\n");
    break;
  case 4:
    printf("No. Trata de nuevo\n");
    break;
  }
}
