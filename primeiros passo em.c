#include <stdio.h>

int main ()
{
    //imprime o cabecalho do nosso jogo
    printf("Bem vindo ao programa de advinhacao: ");

    int numeroSecreto = 42;
    int chute;

    printf("qual e seu chute ?\n ");
    scanf("%d", &chute);
    printf("seu chute foi %d", chute);

    if(chute == numeroSecreto) {
        printf(" parabens voce acertou!\n ");
        printf("jogue de novo, voce e um bom jogador!\n");
    }
    else{

        if(chute>numeroSecreto){
        printf("seu chute foi maior que o numero secreto\n");
        }

        if(chute < numeroSecreto){
            printf("seu numero foi menor que o numero secreto\n");
        }

        printf("voce errou!\n");
        printf("mas nao desanime, tente de novo!\n");
    }
    system("pause");
    return 0;
}


