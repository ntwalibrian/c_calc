#include <stdio.h>
#include <string.h>

void happyBirthday (char birthdayboi[], int years) {
    printf("\nHappy birth day to you!");
    printf("\nHappy birth day to you!");
    printf("\nHappy birth day dear %s!", birthdayboi);
    printf("\nHappy birth day to you!");
    printf("\nYou are %d years old!\n", years);
}

int main() {

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d",&age);

    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}