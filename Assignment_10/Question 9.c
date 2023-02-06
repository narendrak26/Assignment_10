#include<stdio.h>
int check(int num,int digit)
{
    int r;
    while(num)
    {
        r=num%10;
        if(r==digit);
        return 1;
        num=num/10;
    }
    return 0;
}
int main()
{
    int num,x,digit;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a digit\n");
    scanf("%d",&digit);
    x=check(num,digit);
    if(x==1)
    {
        printf("Yes\n\n");

    }
    else
    {
        printf("No\n\n");
    }
    return 0;
}
