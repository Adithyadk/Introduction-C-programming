#include<stdio.h>
int main()
{
    int sum(int m);
    int n;
    printf("enter the number of terms\n");
    scanf("%d",&n);
    int r=sum(n);
    printf("the sum upto %d =%d",n,r);
}

int sum(int m)
{
    if(m==0)
    return(0);
    if(m==1)
    return(1);
    else
    return m+sum(m-1);
}