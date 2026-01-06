#include <stdio.h>
#include <math.h>

int main() {

    double num1 = 0.0;
    double num2 = 0.0;
    char operator = '\0';
    double result = 0.0;

    printf("Calculator \n");
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the operator (/,*,+,-) ?: ");
    // add the space to remove the end line from the previous read/input buffer
    scanf(" %c",&operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch(operator) {
        case '+' :
            result = num1 + num2;
            break;
        case '-' :
            result = num1 - num2;
            break;
        case '*' :
            result = num1 * num2;
            break;
        case '/' :
            if(num2 == 0) {
                printf("division by 0 is invalid\n");
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("wrong operator put (+,*,/,-)\n");
            break;
    }

    printf("Result is : %lf",result);
    return 0;
}