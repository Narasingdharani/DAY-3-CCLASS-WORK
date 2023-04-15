#include <stdio.h>

// function to find maximum of two numbers
int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

// function to find minimum of two numbers
int min(int a, int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int n, i, num, max_num, min_num;
    
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    
    scanf("%d", &num);
    max_num = num;
    min_num = num;
    
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        max_num = max(max_num, num);
        min_num = min(min_num, num);
    }
    
    printf("Maximum = %d\n", max_num);
    printf("Minimum = %d\n", min_num);
    
    return 0;
}

