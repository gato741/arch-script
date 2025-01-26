/* Last updated: 26.01.2025, CET 13:45
   Report bugs if there are any */

#include <stdio.h>

float num1;
float num2;
char op;

void calc() {
    if (op == '+') {
        printf("\n%.2f + %.2f = %.2f", num1, num2, num1 + num2);
    } else if (op == '-') {
        printf("\n%.2f - %.2f = %.2f", num1, num2, num1 - num2);
    } else if (op == '*') {
        printf("\n%.2f * %.2f = %.2f", num1, num2, num1 * num2);
    } else if (op == '/') {
        if (num2 == 0) {
            printf("\nYou can\'t divide by 0!");
        } else {
            printf("\n%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        }
    } else {
        printf("\nWrong operator! (try +, -, * or /)");
    }
}

int main() {
    printf("\nEnter the first number: ");
    scanf("%f", &num1);

    printf("\nEnter the second number: ");
    scanf("%f", &num2);

    printf("\nNow, enter an operator: ");
    scanf(" %c", &op);

    calc();

    return 0;
}