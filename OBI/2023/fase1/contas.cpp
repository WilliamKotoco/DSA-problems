#include <algorithm>
#include <iostream>
#include <vector>
using namespace std; 

int main (int argc, char *argv[]) {

  int disponivel, acougue, farmacia, padaria;
  int num_contas =0;
  cin >> disponivel >> acougue >> farmacia >> padaria;
  
  
  vector<int> contas =  {acougue, farmacia, padaria};
  sort(contas.begin(), contas.end());
  for (int i = 0; i < 3; i++)
  {
    if (disponivel >= contas[i])
    {
      disponivel -= contas[i];
      num_contas++;
    }
    else {
      break;
    }
  }

  cout << num_contas;
  return 0;
}

