#include<stdio.h>


int isEscher(int *array, int size)
{
  int sum = array[0] + array[size-1];
  int i = 1;
  int j = size - 2;

  while (i <= j) {

    printf("%d (%d + %d) == %d \n " , array[i] + array[j], array[i], array[j], sum);
    if(array[i] + array[j] != sum)
      return 0;
    i++;
    j--;
  }

  return 1;
}
int main(int argc, char *argv[])
{

  int N;
  scanf("%d", &N);

  int array[N];
  for (int i = 0 ; i < N; i++) {
    scanf("%d", &array[i]);
  }


  printf("%c", isEscher(array, N) ? 'S' : 'N');

  return 0;


}
