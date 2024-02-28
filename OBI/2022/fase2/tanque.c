#include <stdio.h>

int main(int argc, char *argv[])
{
  int C,D,T;
  scanf("%d %d %d", &C, &D, &T);

  float quanto_gasta = (float)D/C; // supondo zerado, quanto gasta pra chegar no aeroporto


  if (quanto_gasta > T)
    printf("%0.1f\n", quanto_gasta - T); // quanto gasta menos o quanto ele ja tem
  else
   printf("0.0\n"); // ele ja tem mais do que precisa
    return 0;
}
