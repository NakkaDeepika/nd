// Toogle Case
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[200];
    scanf("%[^\n]",str);
    int n = strlen(str);
    for(int i=0;i<n;i++)
    {
        if(islower(str[i]))
            str[i] = toupper(str[i]);
        else if(isupper(str[i]))
            str[i]= tolower(str[i]);
    }
    printf("%s",str);
    return 0;
}