#include <stdio.h>
#include <math.h>    // For sqrt() and pow()
  

int main() {
    double num1, num2, result;
    int choice;
    char cont;
    
    do{
	
        // Display the calculator menu
        printf("\n?? Advanced Calculator ??\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("6. Square Root\n");
        printf("7. Modulus\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Perform the operation based on user choice
        switch(choice) {
            case 1:
                // Addition
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                // Subtraction
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;

            case 3:
                // Multiplication
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;

            case 4:
                // Division
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if(num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;

            case 5:
                // Exponentiation (num1 raised to the power of num2)
                printf("Enter the base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 6:
                // Square Root
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if(num1 < 0) {
                    printf("Error! Square root of a negative number is not possible.\n");
                } else {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                }
                break;

            case 7:
                // Modulus operation (for integers only)
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);

                if (num2 != 0) {
                    // Using fmod() for floating-point modulus
                    result = fmod(num1, num2);
                    printf("Modulus of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
                } else {
                    printf("Error! Modulus by zero is not allowed.\n");
                }
                break;

            default:
                printf("Invalid choice\n");
        }
        printf("\nDo you want to perform another calculation? (y/n): ");
        scanf(" %c", &cont);

        // Clear the console (for Windows)
        if (cont == 'y' || cont == 'Y') {
            
        }

    } while (cont == 'y' || cont == 'Y');

    printf("\n? Calculator terminated successfully.\n");
               


    return 0;
}

