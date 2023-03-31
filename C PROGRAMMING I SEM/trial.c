#include<math.h>
#include<stdio.h>
int m;
int main()
{
    printf("Enter size of matrix: \n");
    scanf("%d",&m);
    int trace(int a[m][m]);
    float norm(int b[m][m]);
    int tn[m][m];
    printf("enter values\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&tn[i][j]);
        }
    }
    printf("matrix is \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",tn[i][j]);
        }
        printf("\n");
    }
    trace(tn);
    norm(tn);
}

int trace(int a[m][m])
{
    int p=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(i==j)
        {
            p+=a[i][j];
        }
     
       }  
    }
    printf("trace of the matrix is %d\n",p);
}

float norm(int b[m][m])
{
    int sum=0;
    float sq=0.0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            sum+=pow( b[i][j],2);
        }
    }
    sq=sqrt(sum);
    printf("norm of the matrix is %f",sq);
}

