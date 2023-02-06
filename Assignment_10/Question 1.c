#include<stdio.h>
float area(float r)
{
    float area;
    area=3.14*r*r;
    return area;

}
int main()
{
    float r,a;
    printf("Enter the radius\n ");
    scanf("%f",&r);
    a= area(r);
    printf("Area=%f",a);
    return 0;
}
