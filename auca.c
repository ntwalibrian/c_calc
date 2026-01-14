#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

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

const char *semesterNames[] = {"", "Fall", "Spring", "Summer"};
bool isValidMark(int mark);
bool isValidCredits(int credits);
int isEmptySlot(const Mark *marks, int length);
void inputMark(Mark *mark);
void printMark(Mark mark);


int main() {
    int option = 0;
    int printOption = 0;
    Mark marks[50] = {0};
    int markCounter = 0;
    int size = sizeof(marks) / sizeof(marks[0]);

    printf("***This is your gpa tracker app***\n");

    //input loop
    do {
        printf("\n1. Enter Marks\n");
        printf("2. Print Mark\n");
        printf("4. Exit\n");
        printf("SELECT OPTION: ");
        scanf("%d",&option); //error

        switch(option) {
            case 1:
                //get the first writable index
                markCounter = isEmptySlot(&marks[0],size);
                if(markCounter != -1 ){
                    printf("feature on the way writing at position %d\n",markCounter);
                    inputMark(&marks[markCounter]);
                    printf("\nYou have successfully entered a course\n");
                } else {
                    printf("No more space to store marks\n");
                }
                break;
            case 2:
                markCounter = isEmptySlot(&marks[0],size);
                for (int i = 0 ; i < markCounter; i+= 1) {
                    printf("%d. %s \n", i+1, marks[i].courseCode);
                }
                printf("Select course: ");
                scanf("%d",&printOption); // error 
                if ( printOption > 0 && printOption <= markCounter) {
                    printMark(marks[printOption - 1]);
                } else {
                    printf("incorrect choice retry \n");
                }
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

int isEmptySlot(const Mark *marks, int length) { 

    for (int i = 0; i < length; i += 1) {
        if(!(marks + i)->filled){
            // aka writable index
            return i;
        } 
    }
    return -1; // array full
}

void printMark(Mark mark) {
    printf("\ncourse: %s \n", mark.courseCode);
    printf("course name: %s \n", mark.courseName);
    printf("instructor name: %s \n", mark.instructorName);
    printf("credits: %d \n", mark.credits);
    printf("marks: %d \n", mark.mark);
    printf("group: %c \n", mark.group);
    printf("Academic year: %d - %d, Semester: %s\n", 
        mark.academicYear.startYear, 
        mark.academicYear.endYear,
        semesterNames[mark.academicYear.semester]);
}

void inputMark(Mark *mark){
    char courseCode[16] = "";
    char courseName[150] = "";
    char instructorName[50] = "";
    int credits = 0;
    int markValue = 0;
    char group = '\0';
    int startYear = 0;
    int semesterOption = 0;

    getchar();
    printf("Enter Course Code: ");
    fgets(courseCode,sizeof(courseCode),stdin);
    courseCode[strlen(courseCode) - 1] = '\0';

    printf("Enter Course Name: ");
    fgets(courseName,sizeof(courseName),stdin);
    courseName[strlen(courseName) - 1] = '\0';

    printf("Enter Instructor Name: ");
    fgets(instructorName,sizeof(instructorName),stdin);
    instructorName[strlen(instructorName) - 1] = '\0';

    printf("Enter this courses credits: ");
    scanf("%d",&credits);//error
    while(!isValidCredits(credits)){
        printf("Invalid credits, re-enter: ");
        scanf("%d",&credits);
    }

    printf("Enter your marks /20 in this courses: ");
    scanf("%d",&markValue);
    while(!isValidMark(markValue)){
        printf("Invalid marks, re-enter: ");
        scanf("%d",&markValue);//error
    }

    printf("Enter your group (A,B,C): ");
    scanf(" %c",&group);//error

    printf("Enter the start year of your academic year (2024-): ");
    scanf("%d",&startYear);//error

    do {
        
        printf("1. Fall (September-December)\n");
        printf("2. Spring (January-May)\n");
        printf("3. Summer (June-August)\n");
        printf("Select the semester: ");

        if (scanf("%d", &semesterOption) != 1) {
            printf("Invalid input. Please enter a number.\n");

            // clear invalid input
            while (getchar() != '\n');
            semesterOption = 0;
            continue;
        }//error

    } while (semesterOption <= 0 || semesterOption > 3);


    for (int i = 0; i < strlen(courseCode); i += 1) {
        mark->courseCode[i] = toupper(courseCode[i]);
    }
    mark->courseCode[strlen(courseCode)] = '\0';
    strcpy(mark->courseName,courseName);
    strcpy(mark->instructorName,instructorName);
    mark->credits = credits;
    mark->mark = markValue;
    mark->group = toupper(group);
    mark->academicYear.startYear = startYear;
    mark->academicYear.endYear = startYear + 1 ;
    switch(semesterOption) {
        case 1 :
            mark->academicYear.semester = FALL;
            break;
        case 2 :
            mark->academicYear.semester = SPRING;
            break;
        case 3 :
            mark->academicYear.semester = SUMMER;
            break;
    }
    mark->filled = true;


    printf("\ndid course code\n");

}

bool isValidMark(int mark) {
    return mark >= 0 && mark <= 20;
}

bool isValidCredits(int credits) {
    //will also validate inputs for the courses struct latter
    return credits >= 2 &&  credits <= 7;
}

