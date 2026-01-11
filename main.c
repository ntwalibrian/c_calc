#include <stdio.h>
#include <stdbool.h>


int main() {

    // int x = 15;
    // int y = 6;
    // int max = (x >= y) ? x : y;
    // printf("Max value is : %d\n",max);

    // bool isOnline = true;
    // printf("%s", (isOnline) ? "he is online" : "he is offline");

    int hours = 12;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";
    printf("%02d:%02d %s",hours,minutes,meridiem);
    return 0;

}