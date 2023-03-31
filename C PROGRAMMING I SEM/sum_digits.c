#include<stdio.h>
int main()
{
 int n,n1,r,sum=0;
 printf("Enter a number\n");
 scanf("%d",&n);
 printf("sum of all the digits reducing it be a single digit\n");
 n1=n;
 do
 { sum=0;
 while (n>0)
 { r=n%10;
 sum=sum+r;
 n=n/10;
 }
 n=sum;
 }
 while (n>9);
{ printf("%d",n);}
return 0;
}

