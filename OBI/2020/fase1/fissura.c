#include <stdio.h>



int main(int argc, char *argv[])
{
  int N, F;
  scanf("%d %d", &N, &F);
  char mapa[N][N+1];
  int linhas_marcadas[N];
  int colunas_marcadas[N]; 

  for (int i = 0; i < N; i++)
  { 
    scanf("%s", mapa[i]);
  }
  /// para ocpuar:
  /// mapa[i][j] < F 
  /// for a posição inicial 
  /// estiver ortogonalmente adjacente IMEDIATO (abaixo, acima, esquerda ou direita) a uma posicao invadida 
  mapa[0][0] = '*';
 
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
   
      /// for menor que o valor ascii e nao estiver marcado
      if( (mapa[i][j] - '0') <= F && mapa[i][j] != '*')
      {
            int acima = ( i-1 > -1 && mapa[i-1][j] == '*');
            int abaixo = (i+1 < N && mapa[i+1][j] == '*');
            int direita = (j+1 < N && mapa[i][j+1] == '*');
            int esquerda = (j-1 > -1 && mapa[i][j-1] == '*');
        // se a linha acima estiver dentro da matriz e for marcada na coluna j
        if (acima || abaixo || direita || esquerda)
          mapa[i][j] = '*';
          
      }

    }
  }
  for (int i = 0; i < N; i++)
  {
      printf("%s \n", mapa[i]);
  }
    
  
  return 0;
}
