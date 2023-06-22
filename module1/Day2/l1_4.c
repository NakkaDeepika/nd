// 4. Write a program to find total number of bits set in a given array.
// Say we have a array of 3 elements
// a[3] = {0x1, 0xF4, 0x10001};
// The total number of set bits in the given array is
// 1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

// Topics to be covered
// - Arrays
// - Loops
// - Bitwise Operators

#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int a[] = {0x1, 0xF4, 0x10001};
    int arraySize = sizeof(a) / sizeof(a[0]);
    int totalBits = 0;

    for (int i = 0; i < arraySize; i++) {
        totalBits += countSetBits(a[i]);
    }

    printf("The total number of set bits in the given array is: %d\n", totalBits);

    return 0;
}
