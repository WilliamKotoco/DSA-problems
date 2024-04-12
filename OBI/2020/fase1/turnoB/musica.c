#include <stdio.h>

int main(int argc, char *argv[])
{
  int N,M,C;
  int musica_amada, musica_odiada;
  scanf("%d %d %d", &N, &M, &C);
  int ama[100000] = {0}; /// ama[c] devolve a musica que a pessoa C ama
  int odeia[100000] = {0}; // odeia[c] devolve a pessoa que odeia a musica c  
  //
  int num_trocas = 0;
  for (int i = 1; i <= N; i++)
  {
    scanf("%d %d",&musica_amada, &musica_odiada);
    ama[i] = musica_amada;
    if (odeia[musica_odiada] == 0)
      odeia[musica_odiada] = i;    
  }

  while (num_trocas < M )
  {
    if(odeia[C] > 0)
    {
      C = ama[odeia[C]]; // a musica que a pessoa que odeia C ama.
      num_trocas++;
    }
    else 
      break;
  }

  printf("%d", num_trocas < M ? num_trocas : -1);

  


  return 0;
}
