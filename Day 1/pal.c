#include <stdio.h>

int main() {
    int originalNumber, reversedNumber = 0, remainder, temporaryNumber;

    printf("Enter an integer: ");
    scanf("%d", &originalNumber);

    // Store the original number in a temporary variable
    temporaryNumber = originalNumber;

    // Reverse the integer mathematically
    while (temporaryNumber > 0) {
        remainder = temporaryNumber % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        temporaryNumber /= 10;
    }

    // Check if the reversed number matches the original
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }

    return 0;
}