//Exercício 2
//Luiz Henrique Bonilha Pasquinelli - 32224419
#include <stdio.h>
int max_bitonic(int v[], int n, int max){
  if(max != 0){
    return v[max];
  }
  else{
    if(v[n - 1] > v[n - 2]){
      max = n - 1;
    }
    return max_bitonic(v, n - 1, max);
  }
}

int main(void) {
  int v[] = {2,5,8,9,11,12,10,7,3};
  int n = 9;
  printf("Elemento máximo do bitonic array: %d\n", max_bitonic(v, n, 0));
  return 0;
}