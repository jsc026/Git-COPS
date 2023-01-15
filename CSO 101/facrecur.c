#include<stdio.h>
int func(int d)
{
  if (d>=1)
  {
    return d*func(d-1);
  }
  else
  return 1;
  }

int main() 
{
    int n;
    printf("Enter a number you want factorial of\n");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,func(n));
   
    return 0;
}
