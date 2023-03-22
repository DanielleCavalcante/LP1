/*Contar a quantidade de cada tipo de peça no tabuleiro:
O tabuleiro (acima) deve ser armazenado numa matriz bidimensional.
Armazenar a qtde de cada peça em uma matriz unidimensional (utilizar o índice para identificar as peças).
NÃO USAR IF para contar as peças. */

#include <stdio.h>

//Vetor usado para somar cada numero da matriz TAB

int main (){

    int vetsoma[7] = {0,0,0,0,0,0,0};

    int tab[8][8] ={ {6,0,0,5,0,0,1,0},
                     {0,1,0,2,0,3,0,2},
                     {0,1,1,1,0,1,0,0},
                     {0,0,2,0,3,4,4,3},
                     {1,0,1,1,0,1,0,0},
                     {0,0,1,3,0,4,0,1},
                     {1,0,0,0,2,2,2,1},
                     {1,5,0,6,0,1,1,0}};

    int lin = 0, col = 0;

    for(lin = 0; lin <= 7; lin++){
        for(col = 0; col<=7; col++){

            switch (tab[lin][col]){
            case 0:
                vetsoma[0] = vetsoma[0] + 1;
                //vetsoma[0]++;
                break;
            case 1:
                vetsoma[1] = vetsoma[1] + 1;
                break;
            case 2:
                vetsoma[2] = vetsoma[2] + 1;
                break;
            case 3:
                vetsoma[3] = vetsoma[3] + 1;
                break;
            case 4:
                vetsoma[4] = vetsoma[4] + 1;
                break;
            case 5:
                vetsoma[5] = vetsoma[5] + 1;
                break;
            case 6:
                vetsoma[6] = vetsoma[6] + 1;
                break;

            default:
                break;
            }
        }
    }

    printf("0 - Ausencia de Pecas: %i\n1 - Peoes: %i \n2 - Cavalos: %i\n3 - Torres: %i\n4 - Bispos: %i\n5 - Reis: %i\n6 - Rainhas: %i", vetsoma[0],vetsoma[1],vetsoma[2],vetsoma[3],vetsoma[4],vetsoma[5],vetsoma[6]);
}
