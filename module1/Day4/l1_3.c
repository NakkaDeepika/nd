//Reverse the array

#include<stdio.h>
void revArr(int *a, int n)
{
    for(int i=0; i<n/2; i++)
    {
        int temp = *(a+i);
        a[i] = *(a+(n-i-1));
        a[n-i-1] = temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of the 1-D array : "); scanf("%d",&n);
    int a[n];
    printf("Enter elements into array : \n"); 
    for(int i=0; i<n; i++)
    {
        scanf("%d",a+i);
    }
    printf("Before Reverse : ");
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\nAfter Reverse : ");
    revArr(a,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",*(a+i));
    }
    return 0;
}