// L2_3. Write a function to find if a give character is vowel using switch case statements, 
//     - If vowel, return 1
//     - If not vowel, return 0;

// In main print,
// "Vowel" if return value is 1
// "Not Vowel" if return value is 0

#include<stdio.h>
int isVowel(char ch)
{
    switch(ch)
    {
        case 'A': return 1; break;
        case 'a': return 1; break;
        case 'E': return 1; break;
        case 'I': return 1; break;
        case 'i': return 1; break;
        case 'O': return 1; break;
        case 'U': return 1; break;
        case 'u': return 1; break;
        default : return 0;
    }
}
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(isVowel(ch))
        printf("Vowel");
    else
        printf("Not Vowel");

    return 0;
}