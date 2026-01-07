#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //pseudo-random
    srand(time(NULL));

    // printf("%d", RAND_MAX);
    // printf("%d", rand());

    int min = 50;
    int max = 100;

    int randomNum = (rand() % (max - min + 1)) + min;

    printf("%d",randomNum);
    return 0;


}