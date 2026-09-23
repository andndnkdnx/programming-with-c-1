#include <stdio.h>

int main()
{
    int n, i, j;
    int factorial = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Multiplication Table
    printf("\n--- Multiplication Table ---\n");

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // Factorial
    for(i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("\nFactorial of %d = %d\n", n, factorial);

    // Star Pattern
    printf("\n--- Star Pattern ---\n");

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}