// L1_1. Write a program to print exponent part of double variable in hexadecimal and binary format.
// lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
// You may use the below link to validate you output
// https://baseconvert.com/ieee-754-floating-point

// Topics to be covered
// - Pointers
// - Bitwise Operators

#include<stdio.h>
int main() {
    double x = 0.7;

    // Extracting the exponent
    unsigned long long bits = *(unsigned long long*)&x;
    unsigned int exponent = (bits >> 52) & 0x7FF;

    // Printing the exponent in hexadecimal and binary format
    printf("Exponent (Hex): 0x%03X\n", exponent);
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");

    return 0;
}