#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char choice = 'y';

do {
    printf("Enter an operator and two numbers (e.g., 2 + 2): ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            default:
            printf("Error: Invalid operator.\n");
    }

        printf("Do you want to continue (y/N)? ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');
    printf("Calculator closed. Thank you!\n");
    return 0;
}

