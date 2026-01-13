#include <stdio.h>
#include <stdlib.h>
# define PRIME_NUM 269
struct Node {
    int index;
    struct Node *next;
};
int hash(int value) {
    return abs((value%PRIME_NUM));
}
void initHashtable(struct Node *ht){
    for(int i = 0; i < PRIME_NUM; i++) {
        ht[i].index = -1;
        ht[i].next = NULL;
    }
}
int* two_sum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *result = (int *)malloc(*returnSize * sizeof(int));
    struct Node *ht = (struct Node *) malloc(sizeof(struct Node) * PRIME_NUM);
    initHashTable(ht);
    //fill our hash table
    for (int i = 0; i < numsSize; i++){
        int hash_num = hash(nums[i]);
        if(ht[hash_num].index == -1) {
            //slot empty
            ht[hash_num].index = i;
        } else {
            //slot is not empty
            struct Node *new = (struct Node *) malloc(sizeof(struct Node));
            new->index = i;
            new->next = NULL;
            struct Node *tmp = &ht[hash_num];
            while ( tmp->next != NULL){
                tmp = tmp->next;
            }
            tmp->next = new;
        }
    }
    //check has table for corresponding pair
    for (int i = 0; i < numsSize; i++) {
        int hash_num = hash(target - nums[i]);

        if(ht[hash_num].index == -1) {
            continue;
        }
        if(nums[ht[hash_num].index] == target - nums[i] && ht[hash_num].index != i){
            result[0] = i;
            result[1] = ht[hash_num].index;
            return result;
        } 
        struct Node *tmp = ht[hash_num].next;
        while(tmp != NULL){
            if(nums[tmp->index] == target - nums[i] && tmp->index != i){
                result[0] = i;
                result[1] = tmp->index;
                return result;
            }
            tmp = tmp->next;
        }
    }
    return result;
}

int main() {
    printf("Hello, World!\n");
    return 0;
}