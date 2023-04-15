#include<stdio.h>

// function to calculate sum of digits of a number
int sumOfDigits(int num) {
    // base case: if the number is less than 10, return the number
    if (num < 10) {
        return num;
    }
    // recursive case: add the last digit to the sum of the rest of the digits
    return (num % 10) + sumOfDigits(num / 10);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d", sumOfDigits(num));
    return 0;
}

