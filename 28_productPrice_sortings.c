#include <stdio.h>

void bubbleSort(float a[], int n) {
    int i, j;
    float temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void selectionSort(float a[], int n) {
    int i, j, min;
    float temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

void insertionSort(float a[], int n) {
    int i, j;
    float key;

    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }
}

void display(float a[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%.2f ", a[i]);
    }

    printf("\n");
}

int main() {
    int n, i;
    float price[100];
    float bubble[100], selection[100], insertion[100];

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &price[i]);

        // Copy original array
        bubble[i] = price[i];
        selection[i] = price[i];
        insertion[i] = price[i];
    }

    bubbleSort(bubble, n);
    selectionSort(selection, n);
    insertionSort(insertion, n);

    printf("\nBubble Sort:\n");
    display(bubble, n);

    printf("Selection Sort:\n");
    display(selection, n);

    printf("Insertion Sort:\n");
    display(insertion, n);

    return 0;
}