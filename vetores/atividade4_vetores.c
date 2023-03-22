#include <stdio.h>

//Nem pecisaria decisão, poderia usar assim: potcomodo = area * vetWatts[classe-1];

int main(){
    //inicialização de variaveis
    int area, qtdecomodos, qtdelamp, potcomodo, classe, cont = 0;
    int tlamp = 0, tpot = 0;
    int vetWatts[5] = {10, 15, 18, 20, 25};

     printf("\nInforme a quantidade de comodos: ");
     scanf("%i", &qtdecomodos);

     while (cont < qtdecomodos)
     {
        printf("\nInforme a area do comodo: ");
        scanf("%i", &area);
        printf("Informe a classe do comodo: ");
        scanf("%i", &classe);

        potcomodo = area * vetWatts[classe-1];
        qtdelamp = potcomodo / 60;

        case 5:
            potcomodo = area * vetWatts[4];
            qtdelamp = potcomodo / 60;
            printf("\nPotencia para o comodo: %i", potcomodo);
            printf("\nLampadas para o comodo: %d\n", qtdelamp);
            break;

        default:
            printf("\n\nFavor digitar uma classe valida!\n\n");
            return 0;
            break;
        }*/

        tpot = potcomodo + tpot;
        tlamp = qtdelamp + tlamp;
        cont++;
     }

     printf("\n\nTotal de potencia de iluminacao: %i", tpot);
     printf("\nTotal de lampadas: %d", tlamp);
}
