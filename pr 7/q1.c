// Q.1 Calculator
// Develop a menu-driven program to implement arithmetic operations such as +, -*, /, and % using UDF,
// switch case, and looping.Make sure that the program is endless until a certain letter is pressed.

#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mul(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}


int main()
{
    int choice;
    float num1, num2;

    while (1)
    { 
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %% (Mod only works for integers)\n");
        printf("Press 0 for exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting program...\n");
            break;
        }

        if (choice == 5)
        {
            int x, y;
            printf("Enter first integer number: ");
            scanf("%d", &x);
            printf("Enter second integer number: ");
            scanf("%d", &y);

            if (y != 0)
                printf("Modulus of %d and %d is %d\n", x, y, mod(x, y));
            else
                printf("Error: Modulus by zero not allowed!\n");

            continue; 
        }

        printf("Enter the first number: ");
        scanf("%f", &num1);

        printf("Enter the second number: ");
        scanf("%f", &num2);

        switch (choice)
        {
        case 1:
            printf("Addition of %.2f and %.2f is %.2f\n", num1, num2, add(num1, num2));
            break;

        case 2:
            printf("Subtraction of %.2f and %.2f is %.2f\n", num1, num2, sub(num1, num2));
            break;

        case 3:
            printf("Multiplication of %.2f and %.2f is %.2f\n", num1, num2, mul(num1, num2));
            break;

        case 4:
            if (num2 != 0)
                printf("Division of %.2f and %.2f is %.2f\n", num1, num2, divide(num1, num2));
            else
                printf("Error: Division by zero not allowed!\n");
            break;

        default:
            printf("Invalid Choice! Try again.\n");
        }
    }

    return 0;
}
