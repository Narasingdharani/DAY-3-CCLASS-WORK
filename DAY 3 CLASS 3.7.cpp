#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int isStrong(int n) {
    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == n) {
        return 1;
    } else {
        return 0;
    }
}

void printStrongNumbers(int lower, int upper) {
    printf("Strong numbers between %d and %d: ", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int lower, upper;
    printf("Input lower limit: ");
    scanf("%d", &lower);
    printf("Input upper limit: ");
    scanf("%d", &upper);
    printStrongNumbers(lower, upper);
    return 0;
}

