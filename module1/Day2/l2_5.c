// L2_5. Write a program to encode any given string such that it gets converted into an unrecognizable form. 
// Also write a decode function to get back the original string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHIFT_AMOUNT 3 // The amount to shift each character

// Function to encode a string using the Caesar cipher
void encode(char *str) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a') + SHIFT_AMOUNT) % 26 + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A') + SHIFT_AMOUNT) % 26 + 'A';
        }
    }
}

// Function to decode an encoded string using the Caesar cipher
void decode(char *str) {
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a') - SHIFT_AMOUNT + 26) % 26 + 'a';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A') - SHIFT_AMOUNT + 26) % 26 + 'A';
        }
    }
}

int main() {
    char str[100];
    
    printf("Enter a string to encode: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';
    
    printf("Original string: %s\n", str);
    
    encode(str);
    printf("Encoded string: %s\n", str);
    
    decode(str);
    printf("Decoded string: %s\n", str);
    
    return 0;
}
