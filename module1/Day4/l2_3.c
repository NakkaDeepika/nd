// No.of Days Elapsed

#include<stdio.h>
int isleap(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int dd,mm,yyyy;
    printf("Enter Date in dd mm yyyy : "); scanf("%d %d %d",&dd,&mm,&yyyy);
    int days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    isleap(yyyy) ? days[1] = 29 : 0 ;
    int total = 0;
    for(int i=0; i<mm-1; i++)
    {
        total+=days[i];
    }
    total+=dd;
    printf("Days Elapsed : %d\n", total);
    return 0;
}