#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int  tam = 5;
   int l, c, mat[tam][tam];

   printf("\nProgrma para imprimir as diagonal principal:\n ");

   srand(time(NULL));

   for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
        mat[l][c] = rand() % 100;
        }
    }

    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }

    printf("\n");
    for(l=0; l<tam; l++){
        for(c=0; c<tam; c++){
            if(l == c)
            printf("%d ",mat[l][c]);
        else
            printf("  ");

        }
        printf("\n");
    }

    return 0;

}
