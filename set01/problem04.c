#include<stdio.h>

int main()
{
  int x,y,sum;
  x=input();
  y=input();
  add(x,y, &sum);
  output(x,y,sum);
}

void add(int a, int b, int *sum)
{
  *sum=a+b;
}

int input()
{
  int x;
  printf("enter the first no.: \n");
  scanf("%d", &x);
  return x;
}

void output(int a, int b, int sum)
{
  printf("sum of %d and %d is %d", a,b, sum);
}