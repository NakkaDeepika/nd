// L1_4. write a program to Store Data for n students in Structures Dynamically. 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct students
{
    int id;
    char name[20];
};

typedef struct student student;

int main()
{
    int n;

    printf("Enter the no of students : ");
    scanf("%d", &n);

    student s[n];

    int i = 0;

    while(i<n)
    {
        printf("Enter student %d details : \n", i+1 );
        printf("id : "); scanf("%d",&s[i].id);
        printf("name : "); scanf("%s", s[i].names);
        i++;
    }

    return 0;
}