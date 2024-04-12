#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
  int D; // entrada
  int A; // aumento
  int N; // afs/
  cin >> D >>A >>N;

  int acrescimo;
  if (N < 16)
    acrescimo = D + ((N - 1) * A);
  else
    acrescimo = D + 14 * A;

  int qtd_dias = 32 - N;
  int pagamento = acrescimo * qtd_dias;

  cout << pagamento << endl;

  return 0;
}
