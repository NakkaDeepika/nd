// L1_1. Assume User will be providing input in the form of a string as show below. 
// Write a function to parse the string and initialize an array of structures. 

// Example String : "1001 Aron 100.00" 
// Example Structure : 
//     struct Student{
//         int rollno;
//         char name[20];
//         float marks;
//     };

// Note: User must be able define the no. of inputs/size of the array during runtime.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

typedef struct Student Student;

void init_student(Student *s, char details[])
{
    int len = strlen(details), i=0, j, m = 0;
    int start_space_index = -1, end_space_index = -1;
    char id[10], marks[10], name[20];

    for(i=0; i<len; i++)
    {
        if(details[i] == ' ' && start_space_index == -1)
        {
            start_space_index = i;
            break;
        }
        else
        {
            id[i]=details[i];
        }
    }
    id[i]='\0';
    
    for(j=len-1; j>=0; j--)
    {
        if(details[j] == ' ' && end_space_index == -1)
        {
            end_space_index = j;
            break;
        }
    }
    for(int k = end_space_index + 1; k<len; k++)
    {
        marks[m++] = details[k]; 
    }
    marks[m] = '\0';

    int h = 0;
    for(int l = start_space_index + 1; l<end_space_index; l++)
    {
        name[h++] = details[l];
    }
    name[h] = '\0';

    strcpy(s->name, name);
    s->rollno = atoi(id);
    s->marks = atof(marks);

    printf("%d %s %f",s->id, s->name, s->marks);
}

int main()
{
    int n;
    printf("Enter the no of students : "); scanf("%d",&n);

    Student s[n];

    char details[100];

    for(int i = 0; i < n; i++)
    {
        scanf(" %[^\n]",details);

        init_student(&s[i], details);
    }

    return 0;
}