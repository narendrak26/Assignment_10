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
int argnment(int a,int b)
{
    return factorial(a)/factorial(a-b);
}
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("Arrangement or Permutation =%d",argnment(x,y));
    return 0;
}
