#include<math.h>
#include<stdio.h>
int main()
{
 int i,n;
 double x,x1,sum,r=3,sign=-1,nu,de=1;
printf("Enter the value of x (angle)\n ");
scanf("%lf",&x);
 x1=x;
printf("Enter the value of n\n");
scanf("%d",&n);
 x=x*(3.14/180);
 sum=x;
 for(i=0;i<n;i++)
 {
 nu=pow(x,r);
 de=r*(r-1)*de;
 sum=sum+(sign)*(nu/de);
 r=r+2;
 sign=sign*-1;
 }
printf("Sin of %lf is = %lf\n",x1,sum);
printf("sin of %lf degree by using built in function= %f\n",x1,sin(x));
}



