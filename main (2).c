#include <stdio.h>
//Quais carateres são letras?
char mix[]={'u','3','7','v','9','4','a','0','b','6'};

int main (void){
  for (int i=0; i<=10; i++){
    if(mix[i] >= 97 && mix[i] < 122){
      //mix[i]=='a' || mix[i]=='u' || mix[i]=='v'){
      printf("elemento: %d\n",i);
    }
  }
  return 0;
}