// L1_1. Use structures to find the volume and the total surface area of the box. 
//    You need to access the members of the structure with the help of a structure pointer:
//     a. With the help of (*) asterisk or indirection operator and (.) dot operator.
//     b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct box
{
    float length, width, height;
};
typedef struct box box;

float volume(box *b)//volume of the box is : l*w*h
{
    return (*b).length * (*b).width * (*b).height;//a. With the help of (*) asterisk or indirection operator and (.) dot operator.
}

float total_area(box *b)//total surface area of the box is : 2(h × W) + 2(h × L) + 2(W × L)
{
    return 2*(b->height * b->width) + 2*(b->height * b->length) + 2*(b->width * b->length);//b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.
}

int main()
{
    box b1;
    printf("Enter the length, width and height of the box : ");
    scanf("%f%f%f",&b1.length, &b1.width, &b1.height);

    printf("Volume of the box : %f\nTotal surface area of the box : %f",volume(&b1), total_area(&b1));
    return 0;
}