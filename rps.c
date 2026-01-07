#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);


int main() {

    srand(time(NULL));
    int usersChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    printf("***ROCK PAPER SCISSORS***\n");

    switch (usersChoice) {
        case 1 :
            printf("You Chose Rock\n");
            break;
        case 2 :
            printf("You Chose Paper\n");
            break;
        case 3 :
            printf("You Chose Scissors\n");
            break;
    }

    switch (computerChoice) {
        case 1 :
            printf("Computer Chose Rock\n");
            break;
        case 2 :
            printf("Computer Chose Paper\n");
            break;
        case 3 :
            printf("Computer Chose Scissors\n");
            break;
    }

    checkWinner(usersChoice,computerChoice);

    return 0;

}

int getComputerChoice() {
    int min = 1;
    int max = 3;
    
    int machine = (rand() % (max - min + 1)) + min ;
    return machine;
}

int getUserChoice() {
    int player = 0;

    do {
        printf("Choose an option\n");
        printf("1.ROCK\n");
        printf("2.PAPER\n");
        printf("3.SCISSORS\n");
        printf("Enter your choice: ");
        scanf("%d",&player);
    } while (player < 1 || player > 3);

    
    return player;
}

void checkWinner(int userChoice, int computerChoice) {
    switch (userChoice) {
        case 1 :
            switch (computerChoice) {
                case 1:
                    printf("You tie ");
                    break;
                case 2:
                    printf("You Lose ");
                    break;
                case 3:
                    printf("You Win congrats! ");
                    break;
            }
            break;
        case 2:
            switch (computerChoice) {
                case 1:
                    printf("You Win Congrats ");
                    break;
                case 2:
                    printf("You Tie ");
                    break;
                case 3:
                    printf("You Lose! ");
                    break;
            }
            break;
        case 3: 
            switch (computerChoice) {
                case 1:
                    printf("You Lose ");
                    break;
                case 2:
                    printf("You Win Congrats! ");
                    break;
                case 3:
                    printf("You Tie ");
                    break;
            }
            break;
    }
}