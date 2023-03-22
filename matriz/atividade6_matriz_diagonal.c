#include <stdio.h>

/*leia uma  matriz 5 x 6 do usu�rio e a  armazene os valores
em um vetor unidimensional de n posi��es.
Depois exibir o vetor e a diagonal principal da matriz 5x6 */

int main (){

    int matriz[5][6] ={ {6,0,0,3,2,1},
                        {0,1,2,2,3,0},
                        {0,1,1,2,1,2},
                        {1,1,0,2,3,1},
                        {2,1,0,3,2,0}};
    int vetor[30];
    int lin, col, c = 0;

    //processamento

    //armazenar no vetor 
    for(lin=0; lin<5; lin++){
        for(col=0;col<6;col++){
            vetor[c] = matriz[lin][col];
            printf("%i ", vetor[c]);
            c++;
        }
    }

    printf("\n");
    lin=0; col=0;
    //Exibir a diagonal Principal 
    for(lin=0; lin<5; lin++){
        for(col=0;col<6;col++){
            if(lin == col) 
                printf("d: %i \n", matriz[lin][col]);
        }
    }

}
