// Diff between even/odd elements

int main()
{
    int n,even=0,odd=0;
    printf("Enter the size of the array : "); scanf("%d",&n);
    int a[n];
    printf("Enter the elemets into array : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",a+i);
        if(*(a+i)%2==0)
            even+=*(a+i);
        else
            odd+=*(a+i);
        if(i==n-1)
            printf("sum difference of even and odd : %d", (even-odd)>0?(even-odd):(odd-even));
    }
    
    return 0;
}