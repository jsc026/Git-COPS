#include<stdio.h>
int main()
{
    int val,count, fact;
    fact=1,count=1;
    printf("Enter a number you want factorial of:\n");
    scanf("%d",&val);
    while (count<=val)
    {
        fact=fact*count;
        count++;
    }
    printf("Factorial of %d is %d", val,fact);
    return 0;
    
}