#include <stdio.h>

int main(int argc, char *argv[])
{
  int N, K, U;
  int num;
  scanf("%d %d %d", &N, &K, &U);


  /// quais cartelas tem cada número em ordem.
  int table[U+1][N+1];
  int qtd_cartelas_com_numero[U+1]; // quantidade de cartelas que tem o número
  int contador_cartelas[N+1]; /// contador de quantos números daquela cartela ja foi. Quando chegar a K, significa que ganhou
  int vencedores[N];
  int quantidade_vencedores = 0;
  for (int i =1; i <= U; i++)
  {
    qtd_cartelas_com_numero[i] = 0;
  }

  for (int i = 1; i <= N; i++)
  {

      for (int j = 1; j <= K; j++)
      {
          scanf("%d", &num);
          table[num][qtd_cartelas_com_numero[num]+1] = i;
          qtd_cartelas_com_numero[num]++;
      }

      contador_cartelas[i] = 0;
      vencedores[i] = -1;
  }


  for(int i = 1; i <= U; i++)
  {
    scanf("%d", &num);
    for (int j = 1; j <= qtd_cartelas_com_numero[num] && quantidade_vencedores == 0; j++)
    {
      int contador = ++contador_cartelas[table[num][j]];
      if (contador == K)
          vencedores[quantidade_vencedores++] = table[num][j];
    }
  
  }

  for (int i = 0; i < quantidade_vencedores; i++)
  {
      printf("%d ", vencedores[i]);
  }

  return 0;
}
