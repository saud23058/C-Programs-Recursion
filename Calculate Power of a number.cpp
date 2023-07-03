//Write a recursive function to calculate the power of a number.

#include <stdio.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    printf("Result: %d\n", power(base, exponent));
    return 0;
}