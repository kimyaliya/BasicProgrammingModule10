#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;

    printf("Calculator");
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        result = num2 != 0 ? num1 / num2 : 0;
        if (num2 == 0) {
            printf("Error: Division by zero!\n");
            return 0;
        }
    } else {
        printf("Invalid operator!");
        return 0;
    }

    printf("Result: %.2f\n", result);

    return 0;
}