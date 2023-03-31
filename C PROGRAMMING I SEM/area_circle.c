#include<stdio.h>
#define PI (3.14)
int main()
{
    float r,area;
    printf("enter the radius of circle\n");
    scanf("%f",&r);
    area=PI*r*r;
    printf("the area of the circle=%f",area);
}