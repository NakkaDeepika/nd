// 2. Write a C program that uses functions to perform the following operations: 
//      i) Reading a complex number 
//      ii) Writing a complex number 
//      iii) Addition of two complex numbers 
//      iv) Multiplication of two complex numbers 
//   (Note: represent complex number using a structure.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct complex_num
{
    float real, imaginary;
}add,mul;
typedef struct complex_num complex_num;

void init_comp_num(complex_num *cm, float real, float imaginary)
{
    cm->real = real;
    cm->imaginary = imaginary;
}

void addition(complex_num *cm1, complex_num *cm2)
{
    add.real = cm1->real+cm2->real;
    add.imaginary = cm1->imaginary+cm2->imaginary;   
}

void multiplication(complex_num *cm1, complex_num *cm2)
{ 
    mul.real = cm1->real * cm2->real - cm1->imaginary * cm2->imaginary;
    mul.imaginary = cm1->real * cm2->imaginary + cm2->real * cm1->imaginary;
}

int main()
{
    complex_num c1,c2;
    float real1, real2, imaginary1, imaginary2;

    printf("Enter the values of complex number 1 : \n");
    printf("Real number value : "); scanf("%f",&real1);
    printf("Imaginary number value : "); scanf("%f",&imaginary1);

    printf("Enter the values of complex number 2 : \n");
    printf("Real number value : "); scanf("%f",&real2);
    printf("Imaginary number value : "); scanf("%f",&imaginary2);

    init_comp_num(&c1, real1, imaginary1);
    init_comp_num(&c2, real2, imaginary2);

    addition(&c1, &c2);
    printf("Addition of 2 complex numbers are : \n");
    printf("Real : %f\n", add.real);
    printf("Imaginary : %f\n",add.imaginary);

    multiplication(&c1, &c2);
    printf("Multiplication of 2 complex numbers are : \n");
    printf("Real : %f\n", mul.real);
    printf("Imaginary : %f\n",mul.imaginary);

    return 0;
}