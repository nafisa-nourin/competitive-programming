#include <stdio.h>

#define SIZE 10

int hash(int key) {
    return key % SIZE;
}

void insert(int hashTable[], int key) {
    int index = hash(key);
    int i = 0;

    while (hashTable[(index + i * i) % SIZE] != -1) {
        i++;
    }

    hashTable[(index + i * i) % SIZE] = key;
}

void display(int hashTable[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d : %d\n", i, hashTable[i]);
    }
}

int main() {
    int hashTable[SIZE];

    // Initialize table
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    insert(hashTable, 25);
    insert(hashTable, 35);
    insert(hashTable, 45);
    insert(hashTable, 15);

    display(hashTable);

    return 0;
}