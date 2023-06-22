// L2_1.Write a function to return the greatest of 3 number using if else if.
#include <stdio.h>

int findGreatest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;
    int num3 = 15;
    
    int greatest = findGreatest(num1, num2, num3);
    
    printf("The greatest number is: %d\n", greatest);
    
    return 0;
}
