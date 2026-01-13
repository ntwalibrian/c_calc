#include <stdio.h>
#include <stdlib.h>

#define SIZE 2000


typedef struct HashMap{
    int key;  // the number in the array
    int value; // index of the provided array 
    struct HashMap* next; //next one with our exact hash index
}HashMap;

HashMap map[SIZE]; //setup the first hash 

void put(int key, int value) {

    int index = abs(key) % SIZE;
    if (map[index].key == -1) {
        map[index].key = key;
        map[index].value = value;
    } else {

        HashMap* current = &map[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = malloc(sizeof(HashMap));
        current->next->key = key;
        current->next->value = value;
        current->next->next = NULL;

    }
    
}

int get(int key) {
    int index = abs(key) % SIZE;

    HashMap* current = &map[index];
    while(current != NULL && current->key != -1) {
        if(current->key == key) {
            return current->value;
        }
        current = current->next;
    }

    return -1;

}

int main() {

    for (int i = 0; i < SIZE ; i++) {
        map[i].key = -1;
        map[i].value = -1;
        map[i].next = NULL;
    }

    return 0;
}