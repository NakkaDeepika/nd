// L1_2. Case Handler:
// Write a C program to copy a file by considering the user option to handle the text case
// -u, to change file content to Upper Case
// -l, to change file content to Lower Case
// -s, to change file content to Purely Upper Case
// if no options are passed then it should be a normal copy

// Example, say we have a file f1 with the following content
// f1:
// -----------------------
// This is the file data
// testing Case copy
// application
// -----------------------

// ./cp -s f1 f2
// f2:
// -----------------------
// This Is The Tile Data
// Testing Case Copy
// Application
// -----------------------

// ./cp -l f1 f3
// f3:
// -----------------------
// this is the tile data
// testing case copy
// application
// -----------------------

// ./cp -u f1 f4
// f4:
// -----------------------
// THIS IS THE FILE DATA
// TESTING CASE COPY
// APPLICATION
// -----------------------

// ./cp f1 f5
// Should perform a normal copy

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//function to convert Upper case
void upper(char content[100][100], int c)
{
    for(int i=0;i<c; i++)
    {
        int len = strlen(content[i]);
        for(int j=0; j<len; j++)
        {
            content[i][j] = toupper(content[i][j]);
        }
    }
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}


//function to convert lower case
void lower(char content[100][100], int c)
{
    for(int i=0;i<c; i++)
    {
        int len = strlen(content[i]);
        for(int j=0; j<len; j++)
        {
            content[i][j] = tolower(content[i][j]);
        }
    }
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}

void copy(char content[100][100], int c)
{
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}

//function to conver Purely upper case
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//function to convert Upper case
void upper(char content[100][100], int c)
{
    for(int i=0;i<c; i++)
    {
        int len = strlen(content[i]);
        for(int j=0; j<len; j++)
        {
            content[i][j] = toupper(content[i][j]);
        }
    }
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}


//function to convert lower case
void lower(char content[100][100], int c)
{
    for(int i=0;i<c; i++)
    {
        int len = strlen(content[i]);
        for(int j=0; j<len; j++)
        {
            content[i][j] = tolower(content[i][j]);
        }
    }
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}

void copy(char content[100][100], int c)
{
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}

//function to conver Purely upper case
void pupper(char content[100][100], int c)
{
    for(int i=0;i<c; i++)
    {
        int len = strlen(content[i]);
        for(int j=0; j<len-1; j++)
        {
            if(content[i][j]==' ')
            {
                content[i][j+1] = toupper(content[i][j+1]);
            }
        }
    }
    FILE *fp2 = fopen("f2.txt","w+");
    for(int j=0;j<c;j++)
    {
        fprintf(fp2,"%s\n",content[j]);
    }
}

int main(int argc, char *argv[])
{
    char f_content[100][100];
    char choice[3], f1[10], f2[10];
    
    if(argc==4)
    {
        strcpy(choice,argv[1]);
        strcpy(f1,argv[2]); strcat(f1,".txt");
        strcpy(f2,argv[3]); strcat(f2,".txt");
    }
    else
    {
        strcpy(f1,argv[1]); strcat(f1,".txt");
        strcpy(f2,argv[2]); strcat(f2,".txt");
    }

    
    FILE* fp1 = fopen(f1,"a+");
    FILE* fp2 = fopen(f2,"w+");
    
    int i=0;
    while(!feof(fp1))
    {
        fscanf(fp1,"%[^\n]\n",f_content[i]);
        i++;
    }
    for(int j=0;j<i;j++)
    {
        printf("%s\n",f_content[j]);
    }
    
    
    if(!strcmp(choice,"-u"))
        upper(f_content,i);
    else if(!strcmp(choice,"-l"))
        lower(f_content,i);
    else if(!strcmp(choice,"-s"))
        pupper(f_content,i);
    else
        copy(f_content, i);
    
    return 0;
}