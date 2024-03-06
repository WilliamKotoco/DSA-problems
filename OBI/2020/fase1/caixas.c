#include <stdio.h>
  

int main(int argc, char *argv[])
{
  int A,B,C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  
  if (((A+B) < C) || ( (B < A) && (C < B)))
    printf("1");
  else if(A == B && A == C)
    printf("3");
  else
    printf("2");
  return 0;
}
