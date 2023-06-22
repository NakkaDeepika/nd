// L1_1. Patern Generator:
// Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
// 1234554321
// 1234  4321
// 123    321
// 12      21
// 1        1

// Concepts to be used.
// - Loops

#include<stdio.h>
void fun1(int n);
void fun2(int n);
void fun3(int n);
int main()
{
    int n;
    printf("Enter value of \'n\' : ");
    scanf("%d",&n);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        fun1(n-i);
        fun2(i);
        fun3(n-i);
        printf("\n");
    }
    return 0;
}
void fun1(int n)//fun prints 1 to n
{
    for(int i=1;i<=n;i++)
        printf("%d",i);
}
void fun2(int n)//fun print spaces
{
    if(n!=0)
        for(int i=0;i<n;i++)
            printf("  ");
}
void fun3(int n)//fun prints n to 1
{
    for(int i=n;i>=1;i--)
        printf("%d",i);
}