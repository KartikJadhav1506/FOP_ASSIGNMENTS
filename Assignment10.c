#include <stdio.h>


long long factorial(int n) {
    long long fact = 1;
    int i;

    if (n < 0)
        return -1;   

    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice;
    float num1, num2, result;
    int n;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;

        case 5:
            printf("Enter base (x) and exponent (y): ");
            scanf("%f %f", &num1, &num2);
            result = 1;
            for (int i = 1; i <= (int)num2; i++) {
                result *= num1;
            }
            printf("Result = %.2lf\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            long long fact = factorial(n);
            if (fact < -1)
                printf("Factorial not defined for negative numbers.\n");
            else
                printf("Result = %lld\n", fact);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}


