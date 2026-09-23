#include <stdio.h>

/* Function declarations */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int factorial(int n);
int isPrime(int n);
int maximum(int a, int b, int c);
void swap(int *a, int *b);

int main()
{
    int choice;
    int a, b, c, n;

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Prime Checking\n");
        printf("7. Maximum of Three Numbers\n");
        printf("8. Swap Two Numbers\n");
        printf("9. Exit\n");
        printf("==========================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", add(a, b));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", subtract(a, b));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Result = %d\n", multiply(a, b));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                if(b == 0)
                    printf("Division by zero is not allowed.\n");
                else
                    printf("Result = %.2f\n", divide(a, b));
                break;

            case 5:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(n < 0)
                    printf("Factorial is not defined for negative numbers.\n");
                else
                    printf("Factorial = %d\n", factorial(n));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);

                if(isPrime(n))
                    printf("%d is a Prime number.\n", n);
                else
                    printf("%d is not a Prime number.\n", n);
                break;

            case 7:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                printf("Maximum = %d\n", maximum(a, b, c));
                break;

            case 8:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                printf("Before swapping: a = %d, b = %d\n", a, b);

                swap(&a, &b);

                printf("After swapping:  a = %d, b = %d\n", a, b);
                break;

            case 9:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 9);

    return 0;
}


/* Addition */
int add(int a, int b)
{
    return a + b;
}


/* Subtraction */
int subtract(int a, int b)
{
    return a - b;
}


/* Multiplication */
int multiply(int a, int b)
{
    return a * b;
}


/* Division */
float divide(int a, int b)
{
    return (float)a / b;
}


/* Factorial */
int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}


/* Prime checking */
int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}


/* Maximum of three numbers */
int maximum(int a, int b, int c)
{
    int max = a;

    if(b > max)
        max = b;

    if(c > max)
        max = c;

    return max;
}


/* Swapping using pointers */
void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}