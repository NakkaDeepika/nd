// L1_2. Write a program to print the grade of the given student using if else if block
//     - 90 to 100 -> "Grade A"
//     - 75 to 89 -> "Grade B"
//     - 60 to 74 -> "Grade C"
//     - 50 to 59 -> "Grade D"
//     - 0 to 49 -> "Grade F"
#include<stdio.h>
int main()
{
	int grade;
    printf("Enter Grade : "); scanf("%d",&grade);
	if(grade>=90 && grade<=100)
	{
		printf("Grade A");
	}
	else if(grade>=75 && grade<=89)
	{
		printf("Grade B");
	}
	else if(grade>=60 && grade<=74)
	{
		printf("Grade C");
	}
	else if(grade>=50 && grade<=59)
	{
		printf("Grade D");
	}
	else if(grade>=0 && grade<=49)
	{
		printf("Grade F");
	}
	return 0;
}