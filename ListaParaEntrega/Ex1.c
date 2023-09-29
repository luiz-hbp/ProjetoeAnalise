//Exercício 1
//Luiz Henrique Bonilha Pasquinelli - 32224419
#include <stdio.h>
int mdc(int a, int b){
  if(a==b){
    return a;
  }
  else if(a % 2 == 0 && b % 2 == 0){
    return 2 * mdc(a/2, b/2);
  }
  else if(a % 2 == 0 && b % 2 == 1){
    return mdc(a/2,b);
  }
  else if(a % 2 == 1 && b % 2 == 0){
    return mdc(a,b/2);
  }
  else if(a % 2 == 1 && b % 2 == 1 && a > b){
    return mdc((a-b)/2,b);
  }
  else if(a % 2 == 1 && b % 2 == 1 && a < b){
    return mdc(a,(b-a)/2);
  }
  return -1;
}

int main(void) {
  printf("MDC: %d\n", mdc(270, 192));
  printf("MDC: %d\n", mdc(35, 10));
  printf("MDC: %d\n", mdc(10, 15));
  printf("MDC: %d\n", mdc(31, 2));
}