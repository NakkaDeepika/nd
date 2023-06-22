// Linear Search

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : "); scanf("%d", &n);
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key = 5;
    int i;
    for(i=0; i<n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element Found");
            break;
        }
    }
    if(i==n)
        printf("Element Not Found");
}