#include <stdio.h>


int main ()
{
    printf("Bem vindo ao programa de advinhacao:\n\n ");

    int numeroSecreto = 42;
    int chute;
    int tentativas = 1;


    while(1) {

        printf("tentativa %d\n", tentativas );
        printf("qual e seu chute ? ");

        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);

        if (chute < 0){
            printf("voce nao pode digitar numeros negativos ");
            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

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

            tentativas++;

    }
    printf("fim de jogo");
    printf("voce acertou em %d  tentativas!", tentativas);

     system("pause");
    return 0;

}

