#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, i, choice;
    char names[100][50];
    char searchName[50];
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");

    for (i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    printf("\nEnter name to search: ");
    scanf("%s", searchName);

    printf("\n1. Case-sensitive search\n");
    printf("2. Case-insensitive search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // Case-sensitive search
        for (i = 0; i < n; i++) {
            if (strcmp(names[i], searchName) == 0) {
                printf("Student found at position %d\n", i + 1);
                found = 1;
                break;
            }
        }
    }
    else if (choice == 2) {
        // Case-insensitive search
        for (i = 0; i < n; i++) {
            if (strlen(names[i]) == strlen(searchName)) {
                int j;
                int same = 1;

                for (j = 0; names[i][j] != '\0'; j++) {
                    if (tolower(names[i][j]) != tolower(searchName[j])) {
                        same = 0;
                        break;
                    }
                }

                if (same) {
                    printf("Student found at position %d\n", i + 1);
                    found = 1;
                    break;
                }
            }
        }
    }
    else {
        printf("Invalid choice\n");
        return 0;
    }

    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}