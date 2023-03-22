#include <stdio.h>
#include <string.h>
#include <ctype.h> //toupper

/*Fa�a um programa que receba uma palavra e calcule quantas vogais (a, e, i, o, u) possui essa  palavra.
Entre  com  um  caractere  (vogal  ou  consoante)  e  substitua todas as vogaisda palavra dada por esse caractere.*/

int main(){
    char palavra[21];
    char substituto;
    int qtA=0, qtE=0, qtI=0, qtO=0, qtU=0;

    printf("Digite a palavra: ");
    gets(palavra);
    printf("\nInforme um caracter: ");
    scanf("%c", &substituto);

    for(int i=0 ; i<strlen(palavra) ; i++){
        switch (toupper(palavra[i])){
        case 'A':
            qtA++;
            palavra[i] = substituto;
            break;
        case 'E':
            qtE++;
            palavra[i] = substituto;
            break;
        case 'I':
            qtI++;
            palavra[i] = substituto;
            break;
        case 'O':
            qtO++;
            palavra[i] = substituto;
            break;
        case 'U':
            qtU++;
            palavra[i] = substituto;
            break;
        }
    }

    printf("\nQuantidade de A: %i", qtA);
    printf("\nQuantidade de E: %i", qtE);
    printf("\nQuantidade de I: %i", qtI);
    printf("\nQuantidade de O: %i", qtO);
    printf("\nQuantidade de U: %i", qtU);

    printf("\nPalavra substituida: %s", palavra);
}
