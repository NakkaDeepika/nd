// L1_5. Write a program to demonstrate the swapping the fields of two structures using pointers

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct details{
    int num;
};

typedef struct details details;

void swap(details *d1, details *d2)
{
    details temp;
    temp.num = d1->num;
    d1->num = d2->num;
    d2->num = temp.num;
}

int main()
{
    details d1,d2;
    d1.num = 1;
    d2.num = 2;
    // printf("Enter 2 numbers : "); scanf("%d %d"&d1.num, &d2.num);
    printf("Before swap : \nd1.num = %d\nd2.num = %d\n",d1.num, d2.num);
    swap(&d1,&d2);
    printf("After swap : \nd1.num = %d\nd2.num = %d\n",d1.num, d2.num);
    return 0;
}