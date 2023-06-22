// L1_2. Write a program to swap any type of data passed to an function.

// Topics to be covered
// - Pointers
// - Type Casting

#include<stdio.h>
void swap(void *n1, void *n2, size_t size)
{
    unsigned char *p = (unsigned char*)n1;
    unsigned char *q = (unsigned char*)n2;
    unsigned char temp;

    for(size_t i=0; i<size; i++)
    {
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}
int main()
{
    int num1 = 10;
    int num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    double dbl1 = 3.14;
    double dbl2 = 1.23;

    printf("Before swap: dbl1 = %lf, dbl2 = %lf\n", dbl1, dbl2);

    swap(&dbl1, &dbl2, sizeof(double));

    printf("After swap: dbl1 = %lf, dbl2 = %lf\n", dbl1, dbl2);
    
    float f1 = 3.14;
    float f2 = 1.23;

    printf("Before swap: f1 = %f, f2 = %f\n", f1, f2);

    swap(&f1, &f2, sizeof(float));

    printf("After swap: f1 = %f, f2 = %f\n", f1, f2);

    return 0;
}