#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 156
#define TOTAL_CARTAS_NAIPE 13
#define NAIPES 4
int main(int argc, char *argv[]) {

  char baralho[MAX];

  scanf("%s", baralho);

  int naipes[NAIPES] = {0};
  int erro[NAIPES] = {0};

  int tabela[NAIPES][TOTAL_CARTAS_NAIPE] = {0}; // inicializa tudo como zero
  /// formato
  for (int i = 0; i < strlen(baralho); i += 3) {
    char num[2] = {baralho[i], baralho[i + 1]};
    int val = atoi(num);
//    printf("%d %c", val, baralho[i+2]);
    switch (baralho[i + 2]) {
    case 'C':
      if (tabela[0][val-1])
        erro[0] = 1;
      else
        tabela[0][val-1] = 1;
      naipes[0]++;
      break;
    case 'E':
      if (tabela[1][val-1])
        erro[1] = 1;
      else
        tabela[1][val-1] = 1;
      naipes[1]++;
      break;
    case 'U':
      if (tabela[2][val])
        erro[2] = 1;
      else
        tabela[0][val] = 1;
      naipes[2]++;
      break;
    case 'P':
      if (tabela[3][val])
        erro[3] = 1;
      else
        tabela[3][val] = 1;
      naipes[3]++;
      break;
    }
  }

  for (int i = 0; i < NAIPES; i++) {
    if (erro[i])
      printf("erro \n");

    else
      printf("%d \n", TOTAL_CARTAS_NAIPE- naipes[i]);
  }
  return 0;
}
