#include <stdio.h>

int main(int argc, char *argv[])
{
  int N;
  int tamanhos[3] = {0};
  int lido;
  int qtd_pequena, qtd_grande;
  scanf("%d", &N);


  for (int i = 0; i < N; i++)
  {
    scanf("%d", &lido);
    tamanhos[lido]++;
  }

  scanf("%d %d", &qtd_pequena, &qtd_grande);

  if (qtd_pequena == tamanhos[1] && qtd_grande == tamanhos[2])
    printf("S");
  else 
    printf("N");
  return 0;
}
