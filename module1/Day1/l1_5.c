// L2_4. Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
//     - Set 2 bits from nth bit position, if operation type is 1
//     - Clear 3 bits from nth bit position, if operation type is 2
//     - Toggle MSB, if operation type is 3
//    You can consider the below function prototype,
//     - bit_operations(int num, int oper_type, int pos);

#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    if (oper_type == 1) {
        int mask = (1 << 2) - 1; // Create a bitmask with 2 bits set
        mask <<= pos; // Shift the bitmask to the desired position
        return num | mask; // Set the 2 bits from the specified position
    } else if (oper_type == 2) {
        int mask = (1 << 3) - 1; // Create a bitmask with 3 bits set
        mask <<= pos; // Shift the bitmask to the desired position
        mask = ~mask; // Negate the bitmask to clear the 3 bits
        return num & mask; // Clear the 3 bits from the specified position
    } else if (oper_type == 3) {
        return num ^ (1 << (sizeof(int) * 8 - 1)); // Toggle the MSB
    }
    
    return num; // Return the original number if oper_type is invalid
}

int main() {
    int num = 12345; // Example value
    int oper_type = 1; // Example operation type
    int pos = 10; // Example bit position
    
    printf("Before operation: %d\n", num);
    int result = bit_operations(num, oper_type, pos);
    printf("After operation:  %d\n", result);

    return 0;
}
