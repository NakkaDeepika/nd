//count no of days

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    char date[10];
    scanf("%s",date);
    int dd = -1, mm = -1, yyyy = -1;

    // split the date from beginning to the first occurrence of /
    char* pch = strtok(date,"/");
    // while we have more / chars
    while (pch != NULL)
    {
        // set the variables
        int num = atoi(pch);
        if(dd == -1) dd = num;
        else if(mm == -1) mm = num;
        else if(yyyy == -1) yyyy = num;

        // continue splitting the string
        pch = strtok (NULL, "/");
    }
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