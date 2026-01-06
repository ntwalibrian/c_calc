#include <stdio.h>

int main() {

    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    char choice = '\0';

    printf("Temperature Converion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf("%c",&choice);

    if(choice == 'C'){
        printf("Enter temperature in Celsius: ");
        scanf("%f",&celsius);
        fahrenheit = (celsius * (9.0/5.0)) + 32.0;
        printf("%.3f celsius is equal to %.3f fahrenheit", celsius,fahrenheit);
    } else if (choice == 'F') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f",&fahrenheit);
        celsius = ((fahrenheit - 32.0) * (5.0/9.0));
        printf("%.3f fahrenheit is equal to %.3f celsius", fahrenheit, celsius);
    } else {
        printf("wrong choice pick C or F");
    }


    return 0;
}