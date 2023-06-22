// L1_2. Prints Bits:
// Scan a 32bit integer and prints its bits.

// Concepts to be used.
// - Loops
// - Bitwise Operators

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n : "); scanf("%d",&n);
    printf("\n%d in 32-bit Binary format : ",n);
    for(int i=31; i>=0; i--)
    {
        if(n&(1<<i))
            printf("1");
        else
            printf("0");
    }
    return 0;
}