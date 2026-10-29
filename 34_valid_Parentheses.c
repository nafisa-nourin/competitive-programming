#include <stdio.h>

int main() {
    char s[] = "{[()]}";
    char stack[100];
    int top = -1;
    int valid = 1;

    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        else {
            if (top == -1) {
                valid = 0;
                break;
            }

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == '}' && open != '{') ||
                (ch == ']' && open != '[')) {
                valid = 0;
                break;
            }
        }
    }

    if (top != -1)
        valid = 0;

    if (valid)
        printf("Valid parentheses\n");
    else
        printf("Invalid parentheses\n");

    return 0;
}