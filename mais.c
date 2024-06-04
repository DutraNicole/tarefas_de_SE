#include <stdio.h>
int num[16]={10,3,-5,-99,-89,3,9,67,6,7,45,33,-98,-43,-87,34};

int main(void) {

  //int tamanho = sizeof(num) / sizeof(num[0]);
  
  for (int i=0;i<=16;i++){
  if (num[i] < 0 ){
    printf("elemento %i é negativo \n" ,i); 
    }
  }
  return 0;
}