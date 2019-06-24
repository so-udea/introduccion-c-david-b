#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lanzamiento();
int main(){
  printf("--------------------------------\n");
  printf("PROGRAMA DE SIMULACIÓN DE MONEDA\n");
  printf("--------------------------------\n");
  int lanz,contc=0, conts=0, digito;
  char text[5];
  srand(time(NULL));
  printf("Digite veces a lanzar la moneda: ");
  scanf("%s", text);
  for(int j=0; j < strlen(text); j++){
    digito = text[j] - '0';
    for(int i=0; i<digito; i++){
      lanz = lanzamiento();
      if(lanz == 1){
	conts++;
	printf("%c",'S');
      }else{
	contc++;
	printf("%c",'C');
      }
    }
    printf(", #deCaras = %d, #deSellos = %d\n ", contc, conts);
    conts=contc=0;
  }
  return 0;
}
int lanzamiento(){
  int l = rand() % 2; 
  return l;
}
