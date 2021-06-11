/******************************************************************
 * File         :   2.1
 * Description  :   A Simple Calculator
 * Author       :   Jose K James
 * Version      :   0.12
 * Date         :   09/06/2021
  
2.1 Write a C program, which takes two integer operands and one operator form the user,
performs the operation and then prints the result.
(Consider the operators +, -, *, /, % and use Switch Statement)
******************************************************************/

#include <stdio.h>
int main()
{
    //Initialising variable
    double number1, number2;
    char opselecter;

    printf("Enter the first No : ");
    scanf("%lf", &number1);
    printf("Enter the Second No : ");
    scanf("%lf", &number2);

    printf("\nSelect your operation : +, -, *, /, %%\n");
    scanf(" %c", &opselecter);

    printf("Output for your operation :\n\n");

    //Using switch statement to identify which operation to execute
    switch (opselecter)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", number1, number2, number1 + number2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", number1, number2, number1 - number2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", number1, number2, number1 * number2);
        break;
    case '/':
        printf("%.2lf / %.2lf = %.2lf", number1, number2, number1 / number2);
        break;
    case '%':
        printf("%.2lf %% %.2lf = %d", number1, number2, (int)number1 % (int)number2);
        break;

    default:
        printf("Unknown operation");
        break;
    }
    return 0;
}