#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];  // Buffer to hold the input string

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Reverse the string
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i -1];
        str[len - i -1] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
