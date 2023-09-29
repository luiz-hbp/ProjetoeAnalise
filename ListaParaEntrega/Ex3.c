//Exercício 3
//Luiz Henrique Bonilha Pasquinelli - 32224419
#include <stdio.h>
#include <math.h>
float raizQ(float x, float x0, float e){
    if(fabs(x0*x0 - x) <= e){
        return x0;
    } else{
        return raizQ(x, (x0*x0 + x) / (2*x0), e);
    }
}

int main(void){
    printf("Resultado da raiz quadrada: %f\n", raizQ(13.0f,3.2f, 0.001f));
    return 0;
}