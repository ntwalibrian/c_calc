#include <stdio.h>
#include <windows.h>
// #include <unistd.h> //linus mac


int main(){

    int num = 1;

    do {
        printf("enter a number greater than zero: ");
        scanf("%d",&num);
    } while ( num <= 0);

    for (int i = 1; i <= 20; i++) {

        if(i == 11 || i == 14) {
            continue;
        }

        if(i == 19) {
            break;
        }

        Sleep(1000); // for windows
        printf("%d\n", i);
    }

    return 0;
}