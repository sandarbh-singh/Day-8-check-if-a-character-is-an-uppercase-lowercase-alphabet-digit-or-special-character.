//Input-a-character-and-check-if-it-is-an-uppercase-or-lowercase-alphabet-digit-or-special-character.

#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf_s(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase Alphabet\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n");
    }
    return 0;
}