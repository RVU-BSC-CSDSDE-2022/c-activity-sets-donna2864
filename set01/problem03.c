#include <stdio.h>
int sum_func(int a , int b);

int main(void)
{
  int a, b, sum;
  printf("Enter the first no.= ");
  scanf("%d", &a);
  printf("Enter the second no.= ");
  scanf("%d", &b);
  sum = sum_func(a,b);
  printf("%d\n", sum);
  return 0;
}

int sum_func(int a, int b)
{ 
  int sum;
  sum = a+b;
  return sum;
}