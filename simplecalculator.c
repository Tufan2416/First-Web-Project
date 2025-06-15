#include <stdio.h>
 
int main() {
    float num1, num2, result;
    char operator;
 
    // Prompt the user to enter two numbers and an operator
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Notice the space before %c to consume leftover input
    printf("Enter the second number: ");
    scanf("%f", &num2);
 
    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator entered.\n");
    }
 
    return 0;
}