//Feito na monitoria do dia 22/11/2023

// criar um vetor com 20 numeros e ordenaremos os numeros por ordem crescente

#include <stdio.h>
#define  TOTAL_NUM 6

int main() {
    int num[TOTAL_NUM]; //isso é um vetor com uma constante no valor 20 atribuida
    int i, aux = 0;

    for (i = 0; i < TOTAL_NUM; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &num[i]);
    }
      //bubble_sort é esse for dentro do outro para verificar um vetor
    for (int j = 0; j < TOTAL_NUM; j++){ //essa linha conta qtas vzs o segundo for vai rodar
        for (int i = 0; i < TOTAL_NUM; i++) {
            if (num[i] > num[i + 1]) {
                aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;

            }
        }
    }

    for (i = 0; i < TOTAL_NUM; i++){
        printf("%d - ", num[i]);
    }

    return 0;
}
