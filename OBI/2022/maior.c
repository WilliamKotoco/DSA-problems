#include <stdio.h>

int soma_digitos(int M) {
  int soma = 0;
  while (M) {
    soma = soma + (M % 10);
    M = M / 10;
  }

  return soma;
}
int maior_digito_s(int N, int M, int S) {
  while (M >= N) {
    if (soma_digitos(M) == S)
      return M;
    M--;
  }
  return -1;
}

int main(int argc, char *argv[]) {

  int N, M, S;

  scanf("%d %d %d", &N, &M, &S);

  printf("%d ", maior_digito_s(N, M, S));
}
