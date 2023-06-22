// Convert String as Integer

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter number : "); scanf("%s",str);
    int n = strlen(str);
    int num = 0;
    for(int i=0; i<n; i++)
    {
        switch(str[i])
        {
            case '0': num=(num*10)+0;
                break;
            case '1': num= (num*10)+1;
                break;
            case '2': num=(num*10)+2;
                break;
            case '3': num=(num*10)+3;
                break;
            case '4': num=(num*10)+4;
                break;
            case '5': num=(num*10)+5;
                break;
            case '6': num=(num*10)+6;
                break;
            case '7': num=(num*10)+7;
                break;
            case '8': num=(num*10)+8;
                break;
            case '9': num=(num*10)+9;
                break;
            default: ;
        }
    }
    printf("%d", num);
    return 0;
}