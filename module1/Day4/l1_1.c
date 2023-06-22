//SUM and AVG of 1D-Array

#include<stdio.h>
int getSum(int *a, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum+=*(a+i);
    return sum;
}
float getAvg(int sum, int n)
{
    return (float)sum/(float)n;
}
int main()
{
    int n;
    printf("Enter the size of the 1-D array : "); scanf("%d",&n);
    int a[n];
    printf("Enter elements into array : \n"); for(int i=0; i<n; i++) scanf("%d",a+i);
    int sum = getSum(a,n); 
    float avg = getAvg(sum, n);
    printf("SUM = %d\nAVG = %f\n",sum, avg);
    return 0;
}