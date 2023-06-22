//  L2_3. Suppose 7 names are stored in an array of pointers names[] as shown below:
//  char *name[]={
//         "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
//           }
//   Write a program to arrange these names in alphabetical order.

#include <stdio.h>
#include <string.h>

void bubbleSort(char *names[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int numNames = sizeof(names) / sizeof(names[0]);

    printf("Names before sorting:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    bubbleSort(names, numNames);

    printf("\nNames after sorting:\n");
    for (int i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
