#include<stdio.h>
void main()
{
    float op1,op2,R=0;
    int choice;
    printf("Enter the two operants\n");
    scanf("%f%f",&op1,&op2);
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:R=op1+op2;
            break;
        case 2:R=op1-op2;
            break;
        case 3:R=op1*op2;
            break;
        case 4:R=op1/op2;
            break;
        default:printf("Invalid Choice Entered\n");
    }
    printf("RESULT=%f",R);
}
