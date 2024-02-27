#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int N;
  scanf("%d ", &N);

  int matriz[N][N];

  int somas[N];

  int linha_falso;
  int coluna_falso;

  for (int i = 0; i < N; i++) {
    int soma_linha = 0;
    for (int j = 0; j < N; j++) {
      scanf("%d", &matriz[i][j]);

      if (matriz[i][j] == 0) {
        linha_falso = i;
        coluna_falso = j;
      }
      soma_linha += matriz[i][j];
    }

    somas[i] = soma_linha;
  }

  int temp = somas[linha_falso];
  somas[linha_falso] = somas[0];
  somas[0] = temp;

  printf("%d \n %d \n %d", abs(somas[1] - temp), linha_falso + 1,
         coluna_falso + 1);

  return 0;
}
