#include<stdio.h>

int reverse(int n);

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Reverse of %d is %d\n", n, reverse(n));
    return 0;
}

int reverse(int n)
{
    static int rev = 0;
    if(n == 0)
        return rev;
    else
    {
        rev = (rev*10) + (n%10);
        return reverse(n/10);
    }
}

