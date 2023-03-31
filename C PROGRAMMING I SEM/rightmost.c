#include<stdio.h>
int main()
{
 float n;
 int x,r;
printf("Enter a floating point number\n");
scanf("%f",&n);
 x=n;
 r=x%10;
printf("The right most digit in the integral part of the given nubmer = %d\n",r);
}
