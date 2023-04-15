#include <stdio.h>

void printNaturalNumbers(int n);

int main() {
    int n;

    printf("Enter upper limit: ");
    scanf("%d", &n);

    printf("Natural numbers between 1 to %d: ", n);
    printNaturalNumbers(n);

    return 0;
}

void printNaturalNumbers(int n) {
    if (n > 1) {
        printNaturalNumbers(n - 1);
    }
    printf("%d ", n);
}

