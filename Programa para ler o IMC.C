#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char nome_aluno[60] ;
  float peso, altura, imc;
  int idade;

  printf("\n\n\tcadastro de alunos academia: ");

  printf("\n\nDigite o nome do aluno: ");
  scanf("%s", &nome_aluno);

  printf("\ndigite seu peso: " );
  scanf("%f", &peso);

  printf("\ndigite sua altura: ");
  scanf("%f", &altura);

  printf("\ndigite sua idade: ");
  scanf("%d", &idade);

  imc = peso/(altura * altura);

  if(imc < 20)
    printf("IMC: %f\tAbaixo do peso\n", imc);
    else if(imc >= 20 && imc < 25)
    printf("IMC: %.2f\tpeso normal\n", imc);
  else if(imc >= 30 && imc <35)
    printf("IMC: %.2f\tobesidade 1 grau", imc);
   else if(imc >= 35 && imc < 40)
    printf("IMC: %.2f\tobesidade 2 grau", imc);
   else
    printf("IMC: %.2f\tobesidade 3 grau", imc);

  system("pause");
  return 0;
}
