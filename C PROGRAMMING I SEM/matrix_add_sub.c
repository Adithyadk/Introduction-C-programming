#include <stdio.h>
 int main()
 {
 int array1[10][10], array2[10][10], arraysum[10][10],arraydiff[10][10];
 int i, j, m, n, option;
 printf("Enter the order of the matrix array1 and array2 \n");
 scanf("%d %d", &m, &n);
 printf("Enter the elements of matrix array1 \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++)
 {
 scanf("%d", &array1[i][j]);
 }
 }
 printf("MATRIX array1 is \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", array1[i][j]);
 }
 printf("\n");
 }
 printf("Enter the elements of matrix array2 \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 scanf("%d", &array2[i][j]);
 }
 }
 printf("MATRIX array2 is \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", array2[i][j]);
 }
 printf("\n");
 }
 printf("Enter your option: 1 for Addition and 2 for Subtraction \n");
 scanf("%d", &option);
 switch (option)
 {
 case 1:
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 arraysum[i][j] = array1[i][j] + array2[i][j];
 }
 }
 printf("Sum matrix is \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", arraysum[i][j]) ;
 }
 printf("\n");
 }
 break;
 case 2:
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 arraydiff[i][j] = array1[i][j] - array2[i][j];
 }
 }
 printf("Difference matrix is \n");
 for (i = 0; i < m; i++) 
 {
 for (j = 0; j < n; j++) 
 {
 printf("%3d", arraydiff[i][j]) ;
 }
 printf("\n");
 }
 }
 return 0;
 }