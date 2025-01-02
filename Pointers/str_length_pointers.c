#include <stdio.h>

int stringLength(char* str)
{   int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}
int main()
{   char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Correcting the error in the code you gave to us by removing newline character
    if (str[stringLength(str) - 1] == '\n') {
        str[stringLength(str) - 1] = '\0';
    }
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}
