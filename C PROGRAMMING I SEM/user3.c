#include<math.h>
#include<stdio.h>
int m;
int main()
{
    int i,j,t[i][j];
    printf("enter size of the square matrix m");
    scanf("%d",&m);
    int trace(int t[m][m]);
    float nor(int n[m][m]);
    int a[m][m];
    printf("enter the values\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
    printf("Matrix is \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("transpose is \n");
        }
        printf("\n");
    }
    trace (a);
    nor(a);
}

int trace(int a[m][m])
{   
    int i,j;
    int p=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
            p+=a[i][j];
            }
        }
    }
    printf("trace of matrix is:%d",p);
}
float nor(int n[m][m])
{
    int i,j;
    int sum=0;
    float sq=0.0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=pow(n[i][j],2);
        }
    }
    sq=sqrt(sum);
    printf("normal of the matrix is %f",sq);
}