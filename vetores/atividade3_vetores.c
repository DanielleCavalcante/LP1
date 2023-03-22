/*Considere  as  matrizes  A e  B  contendo  25  elementos inteiros  cada,
 gerar  e  exibir  uma matriz C de 50 elementos,
 cujos elementos sejam a intercalação dos elementos de A e B.*/

 #include <stdio.h>

 int main(){
    int vetA[25] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49};
    int vetB[25] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50};
    int vetC[50];
    int i, ab = 0;

    for(i=0; i<=49; i++){
        vetC[i] = vetA[ab];
        i++;
        vetC[i] = vetB[ab];
        ab++;
    }
    /*ab = 0;
    for(i=1; i<=49; i++){
        vetC[i] = vetB[ab];
        ab++;
        i++;
    }*/
    
    //saida de dados
    for(i=0; i<=49; i++)
        printf("\nVetor C: %i", vetC[i]);
 }