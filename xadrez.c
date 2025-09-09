#include <stdio.h>

int main()
{
  // Definição das casas a mover para cada peça
  int casasTorre = 5;
  int casasBispo = 5;
  int casasRainha = 8;

  printf("Movimento da Torre:\n");
  for (int i = 1; i <= casasTorre; i++)
  {
    printf("Direita\n");
  }

  printf("\nMovimento do Bispo:\n");
  int j = 1;

  while (j <= casasBispo)
  {
    printf("Cima, Direita\n");
    j++;
  }

  printf("\nMovimento da Rainha:\n");
  int k = 1;
  do
  {
    printf("Esquerda\n");
    k++;
  } while (k <= casasRainha);

  return 0;
}
