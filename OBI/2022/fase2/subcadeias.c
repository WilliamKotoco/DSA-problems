#include <stdio.h>


int isPalindrome(char *string, int start, int end)
{
  while(start < end)
  {
    if (string[start] != string[end])
      return 0;
    start++;
    end--;
  }
  

  return 1;
}
int main(int argc, char *argv[])
{
  int N;
  scanf("%d", &N);

  char cadeia[N+1];
  scanf("%s", cadeia);


  int maior = 0;

  if (N <= 1)
    printf("%d ", N);
  
  else{
    for (int i = 0; i <= N; i++)
    {
      for (int j = N ; j >= 0; j--)
      {
        if (j - i > maior && (isPalindrome(cadeia, i,j)))
        {
          maior = (j - i) + 1;
        }
      }
    }
  }

  printf("%d ", maior);
  return 0;
}
