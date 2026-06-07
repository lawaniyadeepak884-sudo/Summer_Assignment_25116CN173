#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int fibonacci(int n) {
    // Base cases
    if (n == 0) 
        return 0;
    if (n == 1) 
        return 1;
    // Recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter the position (n) for Fibonacci number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        printf("Fibonacci number at position %d is = %d\n", n, fibonacci(n));
    }
    return 0;
}