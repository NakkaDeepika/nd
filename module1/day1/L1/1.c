#include <stdio.h>

int findBiggestUsingIfElse(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int findBiggestUsingTernary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Using if-else: %d\n", findBiggestUsingIfElse(num1, num2));
    printf("Using ternary operator: %d\n", findBiggestUsingTernary(num1, num2));
    
    return 0;
}