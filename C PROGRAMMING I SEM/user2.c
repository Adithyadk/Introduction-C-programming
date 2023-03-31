#include<stdio.h>
int m,n;
int main()
{
    int i,j;
    int a[m][n];
    printf("enter the order of the array \n");
    scanf("%d%d",&m,&n);
    int transpose(int a[m][n]);
    int t[m][n];
    printf("enter the elements of the array one by one\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%3d",t[i][j]);
        }
        printf("\n");
    }
    printf("transpose is \n");
    transpose(t);
    return 0;
}

int transpose (int a[m][n])
{ 
    int i,j,r[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            r[j][i]=a[i][j];
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%3d",r[i][j]);
        }
        printf("\n");
    }
}

