#include <stdio.h>
#define NUMEROS_DE_TENTATIVAS 5

int main ()
{
    //imprime o cabecalho do nosso jogo
    printf("Bem vindo ao programa de advinhacao:\n\n ");

    int numeroSecreto = 42;
    int chute;

    for(int i = 1; i <= NUMEROS_DE_TENTATIVAS; i++){

        printf("tentativa %d de %d\n", i, NUMEROS_DE_TENTATIVAS);
        printf("qual e seu chute ? ");

        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);

        if (chute < 0){
            printf("voce nao pode digitar numeros negativos ");
            i--;
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        if(acertou) {
            printf(" parabens voce acertou!\n ");
            printf("jogue de novo, voce e um bom jogador!\n");

            break;
        }

           else if(maior) {
                printf("seu chute foi maior que o numero secreto\n");
            }else
            {
                printf("seu numero foi menor que o numero secreto\n");
            }

    }
    printf("fim de jogo");

     system("pause");
    return 0;

}

