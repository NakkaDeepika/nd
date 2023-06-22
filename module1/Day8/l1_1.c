// L1_1. File Copy: Write a C program to copy a file using file operations

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp1 = fopen("f1.txt", "r");
    FILE *fp2 = fopen("f2.txt", "w");
    
    while(!feof(fp1))
    {
        char str[100];
        fscanf(fp1,"%[^\n]\n",str);
        printf("%s\n",str);
        fprintf(fp2,"%s\n",str);
    }
    
    return 0;
}