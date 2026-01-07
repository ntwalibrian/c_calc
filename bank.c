#include <stdio.h>

void checkBalance(float balance);
float withdraw(float balance);
float deposit();


int main() {

    float balance = 0.0f;
    int option = 0;

    printf("***Bank Program***\n");

    do {
        printf("1. Check Balance \n");
        printf("2. Withdraw \n");
        printf("3. Deposit \n");
        printf("0. Exit \n");
        printf("Choose an option: ");
        scanf("%d",&option);

        switch(option) {
            case 0:
                printf("\nThank you for using our bank.\n");
                break;
            case 1: 
                checkBalance(balance);
                break;
            case 2:
                balance -= withdraw(balance);
                break;
            case 3: 
                balance += deposit();
                break;
            default:
                printf("Invalid choice retry\n");
                break;
        }

    } while (option != 0);


    return 0;
}

void checkBalance(float balance) {
    printf("Your balance is %.2f $\n", balance);
}

float deposit() {
    float deposit= 0.0f;
    printf("Enter deposit amount : ");
    scanf("%f",&deposit);

    if (deposit > 0) {
        printf("Succesful deposited %.2f $\n", deposit);
    } else {
        printf("Invalid deposit amount\n");
        deposit = 0.0f;
    }

    return deposit;
}

float withdraw(float balance) {
    float withdraw = 0.0f;
    
    printf("Enter withdrawal Amount (Less than %.2f) : ", balance);
    scanf("%f",&withdraw);

    if (withdraw < 0) {
        printf("Invalid withdrawal amount\n");
        return 0.0f;
    } else if (withdraw > balance) {
        printf("Insufficient Funds\n");
        return 0.0f;
    } else {
        printf("Succesful withdraw\n");
        return withdraw;
    }

    
}