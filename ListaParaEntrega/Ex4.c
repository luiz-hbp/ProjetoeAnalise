//Exercício 4
//Luiz Henrique Bonilha Pasquinelli - 32224419
#include <stdio.h>
int cont_sub(int v[], int n, int cont){
    if(n == 1){
        return cont;
    } else{
        if(v[n - 1] != v[n-2]){
            cont++;
        }
        return cont_sub(v, n -1, cont);
    }
}

int main(void){
    int v1[] = {5, 2, 2, 3, 4, 4, 4, 4, 4, 1, 1};
    printf("número de subsequências com número repetido: %d\n", cont_sub(v1, 11, 1));
    int v2[] = {3, 3, -1, -1, -1, 12, 12, 12, 3, 3};
    printf("número de subsequências com número repetido: %d\n", cont_sub(v2, 10, 1));
    //A complexidade dessa função é O(n).
    return 0;
}