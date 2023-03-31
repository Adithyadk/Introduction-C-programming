#include<stdio.h>
int main()
{
    int fact(int m);
    int n;
    printf("enter a number to find factorial \n");
    scanf("%d",&n);
    int r=fact(n);
    printf("factorial of the %d = %d ",n,r);
}

int fact(int m)
{
    if(m==0)
    {
        return(1);
    }
    if(m==1)
    return(1);
    else 
    return m*fact(m-1);
}