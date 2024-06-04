#include <stdio.h>
char mix[]={'1','4','r','R','*','(','%','u','9','L'};

int main(void) {
  
  for (int i=0;i<=10;i++){
    int n=mix[i];
  // printf("Valor do %c = %d\n" ,mix[i],n);
  if (mix[i]>='a' && n>=97 && n<=122){
    printf("elemento %i é uma letra \n" ,i); 
    }
  else if (mix[i]>='A' && n>=65 && n<=90){
    printf("elemento %i é uma letra \n" ,i); 
    }
  }
  return 0;
}
