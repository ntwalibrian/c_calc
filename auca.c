#include <stdio.h>

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
}Mark;


int main() {

    return 0;
}