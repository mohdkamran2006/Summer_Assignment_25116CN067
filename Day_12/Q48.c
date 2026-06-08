#include <stdio.h>

int isPerfect(int n)
{
    int sum = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum == n;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("Perfect Number");
    else
        printf("Not Perfect Number");

    return 0;
}