// L2_4. Write a function to find the type of the character passed
//     - 'A' to 'Z', return 1
//     - 'a; to 'z', return 2
//     - '0' to '9', return 3
//     - Any Other printable symbols, return 4
//     - Non printable symbols, return 5
#include<stdio.h>
#include <ctype.h>
int type_char(char ch)
{
    if(iscntrl(ch))
        return 5;
    if(ch>='A' && ch<='Z')
        return 1;
    else if(ch>='a' && ch<='z')
        return 2;
    else if(ch>='0' && ch<='9')
        return 3;
    else 
        return 4;
}
int main()
{
    char ch;
    printf("Enter the character : "); scanf("%c",&ch);
    printf("Output : %d",type_char(ch));
    return 0;
}