#include <stdio.h>
#include <ctype.h>

typedef char String[200];

int main() {

    ///quiz game

    String questions[] = {
        "What is the largest planet in the solar system? ",
        "What is the hottest planet? ",
        "What planet has the most moons? "
    };
    String options[] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune\n",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars\n",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn\n"

    };
    char answers[] = {
        'A',
        'B',
        'C',
    };

    int points = 0;
    char guess ='\0';
    int questionsLen = sizeof(questions) / sizeof(questions[0]);

    printf("***QUIZ GAME***\n");
    for (int i = 0; i < questionsLen; i++) {
        printf("\n%s\n",questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice: ");
        scanf(" %c",&guess);

        if (guess == answers[i] || guess == tolower(answers[i])) {
            printf("CORRECT\n");
            points += 1 ;
        } else {
            printf("WRONG\n");
        }
    }

    printf("Your score is %d out of 3 points", points);

    return 0;
}