#include <stdio.h>

int main() {
    int n, binary[50], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary Number = ");

    for(i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}