// L1_1. Write a function to find biggest of 2 numbers using 
//     - if else
//     - ternary operator
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    int bignum;
    if(num1>=num2)
    {
        bignum = num1;
    }
    else{
        bignum = num2;
    }
    printf("Largest Number among 2 numbers is %d",bignum);
    return 0;
}