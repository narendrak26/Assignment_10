#include<stdio.h>
int check(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    {
     return 0;
    }
}
int main()
{
    int n,a;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=check(n);
    printf("%d",a);
    return 0;

}
