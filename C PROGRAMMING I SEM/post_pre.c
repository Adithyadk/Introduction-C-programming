#include<stdio.h>
 int main()
{
 int x,y,a,b;
 printf("enter the values:\n");
 scanf("%d %d %d %d",&x,&y,&a,&b);
 printf("before increment");
 printf("\nx=%d\ny=%d\n",x,y);
 x++;
 ++y;
 printf("Result of post fix increment x=%d\n Result of prefix increment y=%d\n",x,y);
 printf("Before decrement\n");
 printf("a=%d\n b=%d\n",a,b);
 a--;
 --b;
 printf("Result of post fix decrement a=%d\n Result of prefix decrement b=%d\n",a,b);
 return 0;
}