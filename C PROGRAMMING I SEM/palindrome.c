#include<stdio.h>
int main() {
 int n,r,req=0,n1;
 printf("Enter any number:");
 scanf("%d",&n);
 n1=n;
 while(n>0)
 { r=n%10;
 req=(req*10)+r;
 n=n/10;
}
 printf("Reversed number is %d\n",req);
 if(n1==req)
 printf("its a palindrome\n");
 else
 printf("its not a palindrome\n");
 return 0;
  }