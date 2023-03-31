#include<stdio.h>
int main()
{
 float n,d;
 int i;
printf("Enter a floating point number\n");
scanf("%f",&n);
i=n;
 d=n-i;
printf("The integral part of the floating point number = %d\n",i);
printf("The decimal part of the floating point nubmer = %f\n",d);
}