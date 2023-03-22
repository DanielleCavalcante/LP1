#include <stdio.h>

int main(){

    /*Dados dois vetores A e B contendo 20 elementos inteiros cada
    , gerar e exibir um vetor C do mesmo tamanho cujos elementos sejam
    a soma dos respectivos elementos de A e B.*/

    int vetA[10]={10,20,30,40,50,60,70,80,90,100};
    int vetB[10]={1,2,3,4,5,6,7,8,9,10};
    int vetC[10];
    int cont;

    for(cont=0; cont<=9; cont++){
        vetC[cont] = vetA[cont] + vetB[cont];
        printf("%i ", vetC[cont]);
    }
}