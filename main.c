#include <stdio.h>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50, 60};
    char grades[]= {'A','B','C','D'};
    char name[] = "Bro code";


    int numbers[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%d\n",numbers[i]);
    }

    return 0;

}