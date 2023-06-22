// L2_2. W.A.P to compare the items in a box, assume equal size boxes
// Boxes shall have unique items stored in random order
// Boxes are compared True if there is one to one mapping of items
// return the final result 1 or 0

// Example of Equal Boxes:
// A[3] = {200, 10, -90}
// B[3] = {-90, 200, 10}    

// Example of Unequal Boxes:
// A[3] = {200, 9, -90}
// B[3] = {-90, 200, 10}    

// Note: The array should not be sorted

// Topics to be covered
// - Arrays
// - Loops
// - Basic Operators

#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int size) {
    int i, j, found;

    for (i = 0; i < size; i++) {
        found = 0;
        for (j = 0; j < size; j++) {
            if (boxA[i] == boxB[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int size = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, size);

    if (result) {
        printf("The boxes have a one-to-one mapping of items.\n");
    } else {
        printf("The boxes do not have a one-to-one mapping of items.\n");
    }

    return 0;
}
