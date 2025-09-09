#include <stdio.h>

// Torre: Move-se horizontalmente (direita)
void moverTorre(int casas)
{
  if (casas <= 0)
    return;
  printf("Direita\n");
  moverTorre(casas - 1);
}

// Rainha: Move-se horizontalmente (esquerda)
void moverRainha(int casas)
{
  if (casas <= 0)
    return;
  printf("Esquerda\n");
  moverRainha(casas - 1);
}

// Bispo: recursivo com loops aninhados (vertical e horizontal)
void moverBispo(int casasVertical, int casasHorizontal)
{
  if (casasVertical <= 0)
    return;
  for (int i = 1; i <= casasHorizontal; i++)
  {
    printf("Cima, Direita\n");
  }
  moverBispo(casasVertical - 1, casasHorizontal);
}

void moverCavalo()
{
  int casasVerticais = 2;
  int casasHorizontais = 1;

  for (int i = 0; i < casasVerticais; i++)
  {
    printf("Cima\n");
    int j = 0;
    while (j < casasHorizontais)
    {
      if (i == 1 && j == 0)
      {
        printf("Direita\n");
        j++;
        break;
      }
      j++;
      continue;
    }
  }
}

int main()
{
  int casasTorre = 5;
  int casasBispo = 5;
  int casasBispoHorizontal = 1;
  int casasRainha = 8;

  printf("Movimento da Torre:\n");
  moverTorre(casasTorre);

  printf("\nMovimento do Bispo:\n");
  moverBispo(casasBispo, casasBispoHorizontal);

  printf("\nMovimento da Rainha:\n");
  moverRainha(casasRainha);

  printf("\nMovimento do Cavalo:\n");
  moverCavalo();

  return 0;
}
