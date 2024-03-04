#include <stdio.h>
int main(int argc, char *argv[]) {
  int N;
  scanf("%d", &N);

  int sum = 0;
  int topo = -1;
  int nums[N];

  for (int i = 0; i < N; i++) {
    int read;
    scanf("%d", &read);

    if (read == 0) {
      sum -= nums[topo];
      topo--;
    } else {
      topo++;
      sum += read;
      nums[topo] = read;
    }

    //    printf("read: %d , topo: %d (%d), sum %d \n", read, topo, nums[topo],
    //    sum);
  }

  printf("%d", sum);

  return 0;
}
