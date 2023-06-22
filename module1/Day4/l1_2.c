//Find Min and Max of 1-D Array

#include<stdio.h>
int main()
{
    int n, max, min;
    printf("Enter the size of the 1-D array : "); scanf("%d",&n);
    int a[n];
    printf("Enter elements into array : \n"); 
    for(int i=0; i<n; i++)
    {
        scanf("%d",a+i);
        if(i != 0)
        {
            if(min > *(a+i))
                min = *(a+i);
            if(max < *(a+i))
                max = *(a+i);
        }
        else{
            min = *(a+i);
            max = min;
        }
    }
    printf("Max : %d\nMin : %d\n",max, min);
    return 0;
}