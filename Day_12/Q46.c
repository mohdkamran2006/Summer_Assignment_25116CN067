#include <stdio.h>

int isArmstrong(int n)
{
    int original = n;
    int sum = 0;
    int digit;

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + (digit * digit * digit);
        n = n / 10;
    }

    return original == sum;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}