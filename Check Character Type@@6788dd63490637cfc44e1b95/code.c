#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input a character
    
    scanf("%c", &ch);

    // Check if the character is a vowel, consonant, digit, or special character
    if (isalpha(ch)) {
        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel");
        } else {
            printf("Consonant");
        }
    } else if (isdigit(ch)) {
        printf("Digit");
    } else {
        printf("Special Character");
    }

    return 0;
}

