#include <stdio.h>

/*Construir  um  programa  que  contee  imprimao  n�mero  de  ocorr�ncias
de  uma letra, fornecida pelo usu�rio, em uma dada string, tamb�m digitada pelo usu�rio.*/

int main(){
    char string[21];
    char letra;
    int qtLetra = 0;

    printf("Digite a string: ");
    gets(string);

    printf("\nInforme a letra: ");
    scanf("%c", &letra);

    for(int i=0;string[i] != '0';i++){
        if(string[i] == letra)
            qtLetra++;
    }

    printf("\nQuantidade de Letras %c: %i", letra, qtLetra);
}
