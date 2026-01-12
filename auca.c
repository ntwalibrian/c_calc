#include <stdio.h>
#include <stdbool.h>

typedef enum {
    FALL   = 1, // Semester 1 (September–December)
    SPRING = 2, // Semester 2 (January–May)
    SUMMER = 3  // Short semester (June–August)
} Semester;

typedef struct {
    int startYear; // ie: 2023
    int endYear;  // ie: 2024
    Semester semester;
} AcademicYear;

typedef struct {
    char courseCode[16]; //ie: AMAT 8114
    char courseName[150]; // ie: intro to comp science
    char instructorName[50];
    int credits; // i.e 2/3/4 for my uni ussually
    int mark; // out of 20
    char group; // ie group A,B,C,D etc..
    AcademicYear academicYear; 
    bool filled; // to check if the struct is filled or not
}Mark;

bool isValidMark(int mark);
bool isValidCredits(int credits);
bool isValidAcademicYear(AcademicYear ay);


int main() {
    int option = 0;
    Mark marks[50] = {0};
    int markCounter = 0;
    printf("***This is your gpa tracker app***\n");

    //input loop
    do {
        printf("\n1. Enter Marks\n");
        printf("4. Exit\n");
        printf("SELECT OPTION: \n");
        scanf("%d",&option);

        switch(option) {
            case 1:
                //going to do something latter
                printf("feature on the way\n");
                break;
            case 4:
                printf("\nThanks for using us\n");
                break;
            default:
                printf("Invalid choice retry\n");
                break;
        }

    } while (option != 4);

    return 0;
}

bool isValidMark(int mark) {
    return mark >= 0 && mark <= 20;
}

bool isValidCredits(int credits) {
    //will also validate inputs for the courses struct latter
    return credits >= 2 &&  credits <= 7;
}

bool isValidAcademicYear(AcademicYear ay) {
    return ay.endYear == ay.startYear + 1;
}