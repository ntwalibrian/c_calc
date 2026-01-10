#include <stdio.h>

int main() {

    int x = 5;
    int y = 6;
    int max = (x >= y) ? x : y;
    printf("%d", max);

    return 0;

}