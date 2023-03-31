#include<stdio.h>
int main()
{
 int n1,n2,n3,big1,big;
printf("Enter any three numbers\n");
scanf("%d%d%d",&n1,&n2,&n3);
 big1 = (n1>n2)? n1 : n2;
 big = (big1>n3)? big1:n3;
printf("Biggest of the two nubmers = %d\n",big);
}
