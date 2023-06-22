// L2_2. Write a function to return the grade of the given student using switch case statements
// 90 to 100 -> 'A'
// 75 to 89 -> 'B'
// 60 to 74 -> 'C'
// 50 to 59 -> 'D'
// 36 to 49 -> 'E'
// 0 to 35 -> 'F'

// In main check the return value and print the below
// 65 -> "Grade A"
// 66 -> "Grade B"
// 67 -> "Grade C"
// 68 -> "Grade D"
// 69 -> "Grade E"
// 70 -> "Grade F"

#include<stdio.h>
char grad(int grade)
{
    if(grade>=90 && grade<=100)
	{
		return 'A';
	}
	else if(grade>=75 && grade<=89)
	{
		return 'B';
	}
	else if(grade>=60 && grade<=74)
	{
		return 'C';
	}
	else if(grade>=50 && grade<=59)
	{
		return 'D';
	}
	else
		return 'F';
}
int main()
{
	int grade;
    printf("Enter Grade : "); scanf("%d",&grade);
	printf("%d -> \"Grade %c%c",grade, grad(grade),'"');
	return 0;
}