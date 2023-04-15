#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to check if a number is Armstrong
int isArmstrong(int n) {
    int sum = 0, temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}

// Function to check if a number is Perfect
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    if (isArmstrong(n)) {
        printf("%d is an Armstrong number\n", n);
    } else {
        printf("%d is not an Armstrong number\n", n);
    }
    if (isPerfect(n)) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}

