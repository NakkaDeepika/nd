// L2_1. Write a program to swap every alternate element of a given array starting for element 0
// For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be a[5] = {30, 20, 10, 40, 50}
// one more example a[5] = {10, 20, 30, 40, 50, 60}, the result should be a[5] = {30, 20, 10, 60, 50, 40}

// Topics to be covered
// - Arrays
// - Loops
// - Basic Operators

#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50,60,70}; //op: a[7] = {30,20,10,60,50,40,70}
    int n = sizeof(a)/sizeof(a[0]);
    int parts = n/3;
    
    printf("Before swap : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int p1=0;
    int p2=2;
    if(n>=3)
    {
        for(int i=1;i<=parts;i++)
        {
            int temp = a[p1];
            a[p1] = a[p2];
            a[p2] = temp;
            p1+=3;
            p2+=3;
        }
    }
    printf("\nAfter swap : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}