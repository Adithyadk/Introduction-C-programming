#include<stdio.h>
int main()
{
 int n,i,osum=0,esum=0;
printf("Enter the value of n\n");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 if(i%2==0)
esum=esum+i;
 else
osum=osum+i;
 }
printf("Sum of all the odd numbers upto n = %d\n",osum);
printf("Sum of all the even numbers upto n = %d\n",esum);
printf("Sum of natural numbers upto n = %d\n",(osum+esum));
}