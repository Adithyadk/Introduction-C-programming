#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,d,r1,r2,realpart,imagpart;
 char i;
printf("Enter the co-efficients of the quadratic equation : \n");
scanf("%f%f%f",&a,&b,&c);
 d=(b*b)-(4*a*c);
 if(d==0)
 {
 r1=r2=(-b)/(2*a);
printf("Roots are real and equal \n");
printf("R1 = %f\n R2 = %f\n",r1,r2);
 }
 else if(d>0)
 {
 r1 = (-b+sqrt(d))/(2*a);
 r2 = (-b-sqrt(d))/(2*a);
printf("Roots are real and distinct \n");
printf("R1 = %f\n R2 = %f\n",r1,r2);
 }
 else
 {
realpart = -b/(2*a);
imagpart=sqrt(-d)/(2 * a);
printf("R1 = %f+%fi\n R2 = %f-%fi\n", realpart, imagpart, realpart, imagpart);
printf("Roots are imaginary\n");
 }
}

