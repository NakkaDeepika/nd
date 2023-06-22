// Decimal to Binary/Octal/Hex Conversion

#include<stdio.h>
void toBinary(int n)
{
    int rem;
    if(n!=0)
    {
        rem = n%2;
        toBinary(n/2);
        printf("%d",rem);
    }
}
void toOctal(int n)
{
    int rem;
    if(n!=0)
    {
        rem = n%8;
        toOctal(n/8);
        printf("%d",rem);
    }
}
void toHexa(int n)
{
    int rem;
    if(n!=0)
    {
        rem = n%16;
        toHexa(n/16);
        switch(rem)
        {
            case 10: printf("A");
                break;
            case 11: printf("B");
                break;
            case 12: printf("C");
                break;
            case 13: printf("D");
                break;
            case 14: printf("E");
                break;
            case 15: printf("F");
                break;
            default: printf("%d",rem);
        }
    }
}
int main()
{
    int n;
    printf("Enter the Decimal number : ");scanf("%d",&n);
    printf("Binary Number : ");
    toBinary(n);
    printf("\nOctal Number : ");
    toOctal(n);
    printf("\nHexa Decimal Number : ");
    toHexa(n);
    return 0;
}