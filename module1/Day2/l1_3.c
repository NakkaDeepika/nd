// L1_3. Write a program to sum every alternate elements of a given array starting for element 0
// For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

// Topics to be covered
// - Arrays
// - Loops
// - Basic Operators

#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for(int i=0; i<sizeof(a)/sizeof(a[0]); i++)
    {
        if(i%2==0)
        {
            sum+=a[i];
        }
    }
    printf("Sum : %d",sum);
    return 0;
}