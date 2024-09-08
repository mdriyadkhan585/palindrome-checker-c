#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

// Function to check if the string is a palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Skip non-alphanumeric characters
        while (start < end && !isalnum((unsigned char)str[start])) {
            start++;
        }
        while (start < end && !isalnum((unsigned char)str[end])) {
            end--;
        }

        // Compare characters
        if (tolower((unsigned char)str[start]) != tolower((unsigned char)str[end])) {
            return 0; // Not a palindrome
        }

        start++;
        end--;
    }

    return 1; // Is a palindrome
}

int main() {
    char str[MAX_LENGTH];
    char choice;

    do {
        printf("Enter a string: ");
        if (fgets(str, sizeof(str), stdin) == NULL) {
            printf("Error reading input.\n");
            return 1;
        }

        // Remove newline character from fgets
        str[strcspn(str, "\n")] = '\0';

        // Check if the input string is empty
        if (strlen(str) == 0) {
            printf("You entered an empty string. Please enter a valid string.\n");
            continue;
        }

        // Check if the string is a palindrome
        if (isPalindrome(str)) {
            printf("The input string is a palindrome.\n");
        } else {
            printf("The input string is not a palindrome.\n");
        }

        // Ask the user if they want to continue
        printf("Do you want to check another string? (y/n): ");
        choice = getchar();
        while (getchar() != '\n'); // Clear the newline character left in the buffer

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting the program.\n");
    return 0;
}
