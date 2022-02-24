#include <stdio.h>
int input()
{
  int n;
   printf("Enter the number of terms: ");
  scanf("%d", &n);
}
int find_fibo(int n)
{
   int i;
  int x = 0, y = 1;
  int nextTerm = x+y;
  printf("Fibonacci Series: %d, %d, ", x, y);
  for (i = 3; i <= n; ++i)
    {
    printf("%d", nextTerm);
    x = y;
    y = nextTerm;
    nextTerm = x + y;
  }
  return nextterm;
}
void output(int n, int fibo)
{
  for(int i=0;i<=n-1;i++)
    {
      printf("",)
    }
}
int main()
{
  
}