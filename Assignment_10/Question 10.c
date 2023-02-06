#include<stdio.h>
void prime_factor(int n)
{
    int i=2;
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
    }
}
int main()
{
    int x;
    printf("Enter a number to find prime factor\n");
    scanf("%d",&x);
    prime_factor(x);
    return 0;
}
