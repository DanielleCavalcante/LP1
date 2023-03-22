/*Dado um vetor A contendo 10 elementos inteiros,
gerar e exibir um vetor B cujos elementos estão na ordem
inversa de A. */

#include <stdio.h>

int main (){

    int vetorA[10], vetorB[10], a, b=0;

    for(a=0; a<=9; a++){
        printf("Informe um numero: ");
        scanf("%i", &vetorA[a]);
    }

    for(a=9; a>=0; a--){
        vetorB[b] = vetorA [a];
        b++;
    }

    for(a=0; a<=9; a++)
        printf(" \nA = %i \n B = %i", vetorA[a], vetorB[a]);
}