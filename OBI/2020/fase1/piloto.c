#include <stdio.h>


int main(int argc, char *argv[])
{

  int A,B,C;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  if ((B-A) < (C-B))
    printf("1 \n");
  else if ((B-A) > (C-B))
    printf("-1 \n");
  else
    printf("0 \n");

  return 0;
}
