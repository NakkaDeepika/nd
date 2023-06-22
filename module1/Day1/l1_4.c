// L1_4. Write a simple calculator program which should accept inputs in the same order.
//     - Operand 1
//     - Operator
//     - Operand 2
// The order of scan should be same, for example, you should first scan in the following order.
// printf("Enter Number1: );
// Scan the first number form the user.
// printf("Enter the operator: );
// Scan the operator from the user.
// printf("Enter Number2: );
// Scan the second number form the user.

#include<stdio.h>
int main()
{
    float operand1, operand2, result = 0;
    char operator;

    printf("Enter Number1: ");
    scanf("%f",&operand1);
    printf("Enter the operator: ");
    scanf(" %c",&operator);
    printf("Enter Number2: ");
    scanf("%f",&operand2);

    switch(operator)
    {
        case '+': result = operand1 + operand2;
        break;
        case '-': result = operand1 - operand2;
        break;
        case '/': result = operand1 / operand2;
        break;
        case '%': result = (int)operand1 % (int)operand2;
        break;
        default: printf("Please Enter proper operator");
    }
    printf("result : %f",result);
    return 0;
}