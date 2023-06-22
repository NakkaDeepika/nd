// Binary/Octal/Hex to Decimal Conversion

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void binaryToDec(char bin[], int i, int val)
{
    if(i!=strlen(bin))
    {
        if(bin[i]=='1')
        {
            val = 2*val + 1;
            binaryToDec(bin, i+1, val);
        }
        else
        {
            val = 2*val + 0;
            binaryToDec(bin, i+1, val);
        }
    }
    else{
        printf("%d", val);
    }
}

void octalToDec(char oct[], int i, int val)
{
    if(i!=strlen(oct))
    {
        for(int j=0; j<8; j++)
        {
            if(oct[i]-'0'==j)
            {
                val = 8*val + j;
                octalToDec(oct, i+1, val);
                break;
            }
        }
        
    }
    else{
        printf("%d", val);
    }
}

void hexaToDec(char hex[], int i, int val)
{
    if(i!=strlen(hex))
    {
        for(int j=0; j<=9; j++)
        {
            if(hex[i]-'0'==j)
            {
                val = 16*val + j;
                hexaToDec(hex, i+1, val);
                break;
            }
        }
        if(hex[i]=='A')
        {
            val = 16*val + 10;
            hexaToDec(hex, i+1, val);
        }
        else if(hex[i]=='B')
        {
            val = 16*val + 11;
            hexaToDec(hex, i+1, val);
        }
        else if(hex[i]=='c')
        {
            val = 16*val + 12;
            hexaToDec(hex, i+1, val);
        }
        else if(hex[i]=='D')
        {
            val = 16*val + 13;
            hexaToDec(hex, i+1, val);
        }
        else if(hex[i]=='E')
        {
            val = 16*val + 14;
            hexaToDec(hex, i+1, val);
        }
        else if(hex[i]=='F')
        {
            val = 16*val + 14;
            hexaToDec(hex, i+1, val);
        }
    }
    else{
        printf("%d", val);
    }
}

int main()
{
    char bin[32];
    printf("Enter the Binary number : "); scanf("%s",bin);
    printf("Decimal Number : ");
    binaryToDec(bin, 0, 0);

    char oct[32];
    printf("\nEnter the Octal number : "); scanf("%s",oct);
    printf("Decimal Number : ");
    octalToDec(oct, 0, 0);

    char hex[32];
    printf("\nEnter the Hexa Decimal number : "); scanf("%s",hex);
    printf("Decimal Number : ");
    hexaToDec(hex, 0, 0);
    return 0;
}