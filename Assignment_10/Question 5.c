#include<stdio.h>
void odd(int x)
{
    int i;
    for(i=1;i<=x;i=i+2)
    {
        printf("%d\n",i);
    }
}
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The Odd numbers are\n");
    odd(n);
    return 0;
}
