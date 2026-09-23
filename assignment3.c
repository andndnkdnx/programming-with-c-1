#include <stdio.h>

int main()
{
    int n, original, digit;
    int reverse = 0, sum = 0;
    int armstrong = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;

    // Reverse and sum of digits
    while (n != 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        sum = sum + digit;
        n = n / 10;
    }

    printf("\nReverse = %d", reverse);
    printf("\nSum of digits = %d", sum);

    // Palindrome check
    if (original == reverse)
        printf("\n%d is a Palindrome number.", original);
    else
        printf("\n%d is not a Palindrome number.", original);

    // Armstrong check
    n = original;

    while (n != 0)
    {
        digit = n % 10;
        armstrong = armstrong + digit * digit * digit;
        n = n / 10;
    }

    if (armstrong == original)
        printf("\n%d is an Armstrong number.", original);
    else
        printf("\n%d is not an Armstrong number.", original);

    return 0;
}