#include<stdio.h>
int factorial(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n,f;
    printf("Enter the number\n");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of %d is %d",n,f);
    return 0;
}
