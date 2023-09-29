//Exercício 5
//Luiz Henrique Bonilha Pasquinelli - 32224419
#include <stdio.h>
int comp_cresc_max(int v[], int n, int cont, int max){
    if(n == 1){
        return max;
    } else{
        if(v[n - 1] < v[n-2]){
            if(cont > max){
                max = cont;
            }
            cont = 1;
        } else{
            cont ++;
        }
        return comp_cresc_max(v, n -1, cont, max);
    }
}

int main(void){
    int v1[] = {5, 10, 3, 2, 4, 7, 9, 8};
    printf("comprimento de segmento crescente máximo: %d\n", comp_cresc_max(v1, 8, 1, 1));
    int v2[] = {10, 8, 7, 5};
    printf("comprimento de segmento crescente máximo: %d\n", comp_cresc_max(v2, 4, 1, 1));
    //A complexidade dessa função é O(n).
    return 0;
}