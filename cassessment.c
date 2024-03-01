#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

int divide(int num1, int num2) {
    if(num2 == 0) {
        printf("Error! Dividing by zero is not allowed.\n");
        return -1;
    }
    return num1 / num2;
}

int main() {
    int num1, num2, choice, result;
    while(1) {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice>= 5) {
            printf("invalid choice !!!!");
            break;
        }

        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        switch(choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                break;
            default:
                printf("Invalid choice. Please choose a valid option.\n");
                break;
        }

        if(result != -1) {
            printf("Result: %d\n", result);
        }
    }

    return 0;
}