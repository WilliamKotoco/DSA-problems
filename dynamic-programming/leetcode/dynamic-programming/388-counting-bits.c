// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
int * countBits(int n,int * returnSize)
{

  int *array = malloc(n+1 * sizeof(int));

  array[0] = 0;
  array[1] = 1;
  array[2] = 1;
  array[3] = 2;
  /// shifting right we get the number divided by 2
  /// the original binary number without the last bit of integer
  ///
  /// So, the number of 1's in i is the number of 1's in i/2 + the last bit of i 
  for (int i = 4; i <= n ; i++)
  {
    array[i] = array[i >> 1] + (i & 1);
  }


  // (i & 1) will compare bit a bit of the binary representation of i 
  // since 1 in binary is 000000001, i & 1 will only be true if the last 
  // number (removed by >> 1) is 1 as well

  *returnSize = n + 1;

  return array;
}

