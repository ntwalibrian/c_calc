#include <stdio.h>

int main() {

    int numbers[5] = {0};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) 
    {
        printf("Enter a value: ");
        scanf("%d",&numbers[i]);
    }

    for (int i = 0; i < size; i++) 
    {
        printf("%d\n");
        
    }


    return 0;

}