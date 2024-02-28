#include<stdio.h>


int main(int argc, char *argv[])
{
  int N; // número de dedos 

  scanf("%d", &N);

  for (int i = 0; i < N; i++)
  {
    if (i == 5)
      printf("\n");
    printf("I");
  }

  if (N < 6)
  {
    printf("\n *");
  }
  return 0;
}
