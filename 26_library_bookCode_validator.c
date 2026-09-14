#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char code[20];
    int valid = 1;

    printf("Enter book code: ");
    scanf("%s", code);

    // Check exact length
    if (strlen(code) != 12) {
        valid = 0;
    }
    else {
        // First 3 characters must be uppercase letters
        for (int i = 0; i < 3; i++) {
            if (!isupper(code[i])) {
                valid = 0;
            }
        }

        // 4th character must be '-'
        if (code[3] != '-') {
            valid = 0;
        }

        // Next 4 characters must be digits
        for (int i = 4; i < 8; i++) {
            if (!isdigit(code[i])) {
                valid = 0;
            }
        }

        // 9th character must be '-'
        if (code[8] != '-') {
            valid = 0;
        }

        // Last 3 characters must be digits
        for (int i = 9; i < 12; i++) {
            if (!isdigit(code[i])) {
                valid = 0;
            }
        }
    }

    if (valid)
        printf("Valid book code\n");
    else
        printf("Invalid book code\n");

    return 0;
}