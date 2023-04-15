#include<stdio.h>

// function to check if a number is palindrome
int isPalindrome(int num, int temp) {
    // base case: if the number is less than 10, it is always palindrome
    if (num < 10) {
        return (temp == num);
    }
    // recursive case: check if the first and last digits are equal
    if (num % 10 == temp % 10) {
        return isPalindrome(num / 10, temp / 10);
    }
    else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPalindrome(num, num)) {
        printf("%d is palindrome", num);
    }
    else {
        printf("%d is not palindrome", num);
    }
    return 0;
}

