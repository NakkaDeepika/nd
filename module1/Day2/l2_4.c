// L2_4. Write a function xstrchr() which scans a string from beginning to end in search of a character. 
// If the character is found, it should return a pointer to the first occurrence of the given character in the string.
// If the given character is not found, the function returns a NULL.
// The prototype of the function should be:

// char *xstrchr(char *string, char ch):

#include <stdio.h>

char *xstrchr(char *string, char ch) {
    while (*string != '\0') {
        if (*string == ch) {
            return string;
        }
        string++;
    }
    return NULL;
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';

    char *result = xstrchr(str, ch);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", ch, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}
