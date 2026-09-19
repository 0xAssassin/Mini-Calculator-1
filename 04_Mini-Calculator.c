#include <stdio.h>

// Main Function
int main()
{
    char operator;
    float operand1, operand2, result;

    printf("Operators: '+', '-', 'x', '/'\n");
    printf("Enter your operation like this (12 + 37): ");
    scanf("%f %c %f", &operand1, &operator, &operand2);

    if (operator == '+')
    {
        result = operand1 + operand2;
        printf("%.2f + %.2f = %.2f\n", operand1, operand2, result);
    }
    else if (operator == '-')
    {
        result = operand1 - operand2;
        printf("%.2f - %.2f = %.2f\n", operand1, operand2, result);
    }
    else if (operator == 'x' || operator == '*')
    {
        result = operand1 * operand2;
        printf("%.2f x %.2f = %.2f\n", operand1, operand2, result);
    }
    else if (operator == '/' && operand2 != 0)
    {
        result = operand1 / operand2;
        printf("%.2f / %.2f = %.2f\n", operand1, operand2, result);
    }
    else
    {
        printf("Something went wrong!\n");
    }

    return 0;
}