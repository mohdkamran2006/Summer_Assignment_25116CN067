// Q1: Program to calculate sum of first N natural numbers

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter value of N: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}