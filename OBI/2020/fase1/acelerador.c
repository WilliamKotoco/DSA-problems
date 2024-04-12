#include <stdio.h>
int main()
{
  int D;
  scanf("%d", &D);

  /// remove os osontos inúteis que se ele cair não é em nehum setor.. E aritmética modular com 8 porque tem que cair de 1 até 8, (menos 5 vai cair 1 2 ou e) 
  printf("%d", (D-5)%8);
  return 0;
}
