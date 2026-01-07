#include <stdio.h>

int square(int num) {
    return num*num;
}

int main(){
    int number = 10;
    int result = 0;
    result = square(number);
    printf("the result is : %d" , result);
    return 0;
}