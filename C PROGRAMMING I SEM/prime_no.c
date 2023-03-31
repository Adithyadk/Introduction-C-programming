#include<stdio.h>
int main()
{
 int n,i,f=0;
 printf("Enter a number:\n");
 scanf("%d",&n);
 for(i=2;i<=(n/2);i++)
 {
 if((n%i)==0)
 {
 f=1;
 break;
 }
 }
 if(f==1)
 {
 printf("its not a prime number\n");
 }
 else
 printf("its a prime number\n");
 return 0;
}

