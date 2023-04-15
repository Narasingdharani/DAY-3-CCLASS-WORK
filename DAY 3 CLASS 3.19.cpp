#include <stdio.h>

int main() {
    int size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;
    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", ptr+i);
    }
    
    printf("The elements of the array are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", *(ptr+i));
    }
    
    return 0;
}

