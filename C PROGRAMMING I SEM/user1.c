#include <stdio.h>

int m,n;
int main()
{
int i,j,option;
printf("Enter the order of the matrix array1 and array2 \n");
scanf("%d %d", &m, &n);
int a[m][n], b[m][n];
int sum(int c[m][n],int d[m][n]);
int sub(int p[m][n],int q[m][n]);
printf("Enter the elements of matrix array1 \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++)
 {
 scanf("%d", &a[i][j]);
 }
 }
 printf("MATRIX array1 is \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", a[i][j]);
 }
 printf("\n");
 }
 printf("Enter the elements of matrix array2 \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 scanf("%d", &b[i][j]);
 }
 }
 printf("MATRIX array2 is \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", b[i][j]);
 }
 printf("\n");
 }
 printf("Enter your option: 1 for Addition and 2 for Subtraction \n");
 scanf("%d", &option);
 switch (option)
 {
     case 1:printf("SUM of Matrix is\n");
            sum(a,b);
            break;
    case 2:printf("Difference of Matrix is\n");
            sub(a,b);
            break;
    default:printf("invalid option\n");
 }
 return 0;
}


int sum(int c[m][n],int d[m][n])
{   
 int r[m][n],i,j;
 for (i = 0;i< m;i++) 
 {
 for (j = 0; j < n; j++) 
 {
 r[i][j] = c[i][j] + d[i][j];
 }
 }
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", r[i][j]) ;
 }
 printf("\n");
 }
}

 int sub(int p[m][n],int q[m][n])
 {
 int r[m][n],i,j;
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
     r[i][j] = p[i][j] - q[i][j];
 }
 }
for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", r[i][j]) ;
 }
 printf("\n");
 }
 }
