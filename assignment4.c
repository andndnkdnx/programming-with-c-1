#include <stdio.h>

int main() {
    int choice, num, a, b, c;
    float marks, bill, units, result;
    char operator;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Check Positive, Negative or Zero\n");
        printf("2. Check Even or Odd\n");
        printf("3. Find Largest Among Three Numbers\n");
        printf("4. Grade Calculation\n");
        printf("5. Simple Calculator\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num > 0)
                    printf("%d is Positive.\n", num);
                else if (num < 0)
                    printf("%d is Negative.\n", num);
                else
                    printf("The number is Zero.\n");
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                if (num % 2 == 0)
                    printf("%d is Even.\n", num);
                else
                    printf("%d is Odd.\n", num);
                break;

            case 3:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &c);

                if (a >= b && a >= c)
                    printf("%d is the largest.\n", a);