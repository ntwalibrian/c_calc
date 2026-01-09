#include <stdio.h>

int main() {

    char numbers[][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'},
        {'*','0','#'}
    };

    for (int i = 0; i < 4; i++){//rows
        for (int j = 0 ; j < 3; j++){//colums
            printf("%c ",numbers[i][j]);
        }
        printf("\n");
    }

    // int size = sizeof(numbers) / sizeof(numbers[0]);



    return 0;

}