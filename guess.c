#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    srand(time(NULL));
    int min = 1;
    int max = 100;
    int correct = (rand() % (max - min + 1)) + min;

    int guess = 0;
    int passes = 0;

    while (guess != correct) {
        printf("Guess a number between 1 -  100 : ");
        scanf("%d",&guess);
        if (guess > correct) {
            printf("TOO HIGH!\n");
        } else if (guess < correct) {
            printf("TOO LOW!\n");   
        }
        passes += 1;
    }

    printf("It took you %d tries\n", passes);
    printf("The answer is %d", correct);
    return 0;




}