#include <stdio.h>

void triangle (int len);
void multiplication_table ();
void rectangle(int rows, int colums, char symbol);

int main() {
    // int len = 0;
    // printf("triangle length : ");
    // scanf("%d", &len);
    // triangle(len);
    // multiplication_table();

    int r = 0;
    int c = 0;
    char s = '\0';
    printf("Enter the # of rows: ");
    scanf("%d", &r);
    printf("Enter the # of columns: ");
    scanf("%d", &c);
    printf("Enter the symbol: ");
    scanf(" %c", &s);

    rectangle(r,c,s);

    return 0;
}

void triangle(int len) {
    int j = 0;
    for (int i = 0 ; i <= len; i += 1) {
        j = i;
        while (j != 0) {
            printf("*   ");
            j--;
        }
        printf("\n");
    }
}

void multiplication_table() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i*j);
        }
        printf("\n");
    }
}

void rectangle(int rows, int colums, char symbol) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= colums; j++ ) {
            printf("%c",symbol);
        }
        printf("\n");
    }
}