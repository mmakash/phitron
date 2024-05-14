#include <stdio.h>

// Function to swap two integers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to sort three integers
void sortThreeIntegers(int *a, int *b, int *c) {
    if (*a > *b) {
        swap(a, b);
    }
    if (*a > *c) {
        swap(a, c);
    }
    if (*b > *c) {
        swap(b, c);
    }
}

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    // Sort the integers
    sortThreeIntegers(&a, &b, &c);

    // Print the sorted integers
    printf("%d %d %d\n", a, b, c);

    return 0;
}
