#include <stdio.h>
#include <stdbool.h>

int main() {
    // this is my first program :)
    /*
    this is also  a 
    comment
    */
    int age = 25;
    int year = 2025;
    int quantity = 1;
    printf("year is %d  \n", year);
    printf("you are %d years old\n", age);
    printf("you have ordered %d x items", quantity);
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    printf("price is %f \n", price);
    printf("the temperature is %f celcius\n", temperature);
    printf("your gpa %f \n", gpa);
    // for more decimal points use double 
    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    // you need to specify the number of decimals using .15 
    printf("the value of pi is %.15lf \n", pi);
    printf("the value of e is %.15lf \n", e);
    //characters us single quotes
    char grade = 'A';
    printf("your grade is %c \n", grade);

    // no strings in c we use array of charactes need in double quotes
    char name[] = "Brian";
    printf("Hello %s\n", name);

    bool isOnline = true ;
    printf("%d \n", isOnline);

    if (isOnline){
        printf("online");
    }
    else {
        printf("not online");
    }

    return 0;
}
