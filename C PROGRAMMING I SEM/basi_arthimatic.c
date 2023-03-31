#include<stdio.h>
int main()
{
    system("cls");
    int n1,n2,add,sub,mul,di,mo;
    printf("Enter any two numbers \n");
    scanf("%d%d",&n1,&n2);

    add=n1+n2;
    sub=n1-n2;
    mul=n1*n2;
    di=n1/n2;
    mo=n1%n2;

    printf("Addition result = %d\n",add);
    printf("Subtraction result = %d\n",sub);
    printf("Multiplication result = %d\n",mul);
    printf("Division result =%d\n", di);
    printf("Modulo division result = %d",mo);
    return 0;
}
