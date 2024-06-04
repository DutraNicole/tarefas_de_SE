#include <stdio.h>
char mix[]={'1','4','r','R','A','(','P','u','9','L'};

int main(void) {

  for (int i=0;i<=10;i++){
    int n=mix[i];
  if (mix[i]>='A' && n>=65 && n<=90){
    printf("elemento %i é uma letra maiuscula \n" ,i); 
    }
  }
  return 0;
}
