#include<stdio.h>

int main() {
    int a, b;
    float result;
    char c;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nEnter operation (+, -, *, /): ");
    // Consume the newline character left in the input buffer
    while (getchar() != '\n');

    scanf("%c", &c);

    switch (c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = (float) a / b;
            break;
        default:
            printf("Error 101");
            return 1;  // Exit the program with an error status
    }

    printf("Result = %f", result);
    return 0;
}

