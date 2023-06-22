// L1_3. Write a program to read the 
//     - Roll No
//     - Name (Note, you should read full name of the student including initials)
//     - Marks of Physics, Math and Chemistry
//     Calculate the total, percentage and print the summary.
#include<stdio.h>
int main()
{
    int roll_no, physics, math, Chemistery;
    char name[128];

    printf("Enter Roll No : ");scanf("%d",&roll_no);
    printf("Enter Name : ");scanf("%s",name);
    printf("Enter Marks not more than 100:\n");
    int flag1=1; while(flag1){printf("Physics : "); scanf("%d",&physics); if(physics<=100) flag1=0; else printf("Enter marks in between 0~100\n");}
    int flag2=1; while(flag2){printf("Math : ");scanf("%d",&math); if(math<=100) flag2=0; else printf("Enter marks in between 0~100\n");}
    int flag3=1; while(flag3){printf("Chemistery : ");scanf("%d",&Chemistery); if(Chemistery<=100) flag3=0; else printf("Enter marks in between 0~100\n");}

    int total = physics + math + Chemistery;
    float percentage = (total/300.0)*100.0; //Lets assume total marks as 300 and each subject marks in between 0~100
    printf("Total : %d\tPercentage : %f\n",total, percentage);

    return 0;
}