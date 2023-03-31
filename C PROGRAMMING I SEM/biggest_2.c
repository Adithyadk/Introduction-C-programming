#include<stdio.h>
int main()
{
 int n1,n2,big;
printf("Enter any two numbers\n");
scanf("%d%d",&n1,&n2);
 big = (n1>n2)? n1 : n2;
printf("Biggest of the two nubmers = %d\n",big);
}
