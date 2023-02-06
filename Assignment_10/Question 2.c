#include<stdio.h>
float interest(float p,float r,float t)
{

    float SI;
    SI=(p*r*t)/100;
    return SI;

}
int main()
{
    float p,r,t,s;
    printf("Enter the value of p r and t\n");
    scanf("%f%f%f",&p,&r,&t);
    s=interest(p,r,t);
    printf("S.I=%f",s);
    return 0;
}
