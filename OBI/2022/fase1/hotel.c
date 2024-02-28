#include <stdio.h>

int main(int argc, char *argv[]) {
  int D; // entrada
  int A; // aumento
  int N; // afs/
  scanf("%d %d %d", &D, &A, &N);

  int acrescimo;
  if (N < 16)
    acrescimo = D + ((N - 1) * A);
  else
    acrescimo = D + 14 * A;

  int qtd_dias = 32 - N;
  int pagamento = acrescimo * qtd_dias;

  printf("%d ", pagamento);

  return 0;
}
