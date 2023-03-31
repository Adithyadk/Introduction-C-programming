#include<stdio.h>
int main()
{
int x,y,z,t;
printf("Enter any three numbers\n");
scanf("%d%d%d",&x,&y,&z);
t=x;
x=y;
y=z;
z=t;
printf("The value of x,y and z after swapping\n");
printf("x=%d\n",x);
printf("y=%d\n",y);
printf("z=%d\n",z);
}