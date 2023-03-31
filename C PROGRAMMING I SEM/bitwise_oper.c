#include<stdio.h>
 int main()
 {
 short unsigned int a,b,c,d,e,f,g,h,n;
printf("Enter any two numbers\n");
scanf("%u%u",&a,&b);
printf("Enter the value of n \n");
scanf("%u",&n);
 c=a&b;
 d=a|b;
 e=~(a);
 f=a>>n;
 g=a<<n;
 h=a^b;
printf("Bitwise AND result = %u\n",c);
printf("Bitwise OR result = %u\n",d);
printf("Bitwise ONE's Complement result = %u\n",e);
printf("Bitwise rightshift operator result = %u\n",f);
printf("Bitwise leftshift operator result = %u\n",g);
printf("Bitwise XOR result = %u\n",h);
 }