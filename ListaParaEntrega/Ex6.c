//Exercício 6
//Luiz Henrique Bonilha Pasquinelli - 32224419
#include <stdio.h>
void seq_consecutiva(int v[], int n){
    int aux, count = 0;
    for(int i = 0; i < n; i ++){
        for(int m = i + 1; m < n; m++){
            if(v[i] == v[m]){
                for(int j = i; j < m + i; j++){
                    if(v[j] == v[j+(m - i)]){
                        count ++;
                    }
                }
                if(count == m - i){
                    printf("sequencias iguais consecutivas encontradas: i:%d, m:%d\n", i + 1, m - i);
                    aux ++;
                }
                count = 0;
            }
        }
    }
    if(aux == 0){
        printf("nenhuma sequencia igual consecutiva encontrada!");
    }
}

int main(void){
    int v[] = {7, 9, 5, 4, 5, 4, 8, 6};
    seq_consecutiva(v, 8);
    return 0;
}