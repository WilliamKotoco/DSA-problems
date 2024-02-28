#include <stdio.h>

int main() {
  int N, S;
  scanf("%d %d", &N, &S);
  int chuvas[N];

  for (int i = 0; i < N; i++)
    scanf("%d", &chuvas[i]);

  int current = 0;
  int end = N;
  int intervals = 0;

  for (int i = 0; i < N; i++) {
    int curr_sum = 0;
    current = i;
    while (current < N) {
      curr_sum += chuvas[current];
      if (curr_sum == S)
        intervals++;
      else if (curr_sum > S)
        break;

      current++;
    }
  }

  printf("%d\n", intervals);
}
