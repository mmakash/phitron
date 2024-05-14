#include <stdio.h>

int stringLength(char *str) {
    int length = 0;

    // Iterate through the characters until we reach the null terminator
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[100];
    scanf("%s",str);

    // Calculate the length of the string
    int length = stringLength(str);

    printf("Length of the string: %d\n", length);

    return 0;
}
