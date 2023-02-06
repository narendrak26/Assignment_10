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
int comb(int a,int b)
{
    return factorial(a)/(factorial(b)*factorial(a-b));
}
int main()
{
    int x,y;
    printf("Enter two number\n");
    scanf("%d%d",&x,&y);
    printf("combination =%d",comb(x,y));
    return 0;
}
