#include <math.h>
#include <stdio.h>

int main() {
    int n;
    printf("Enter a binary number: ");
    scanf("%8d", &n); /* limits entry to 8 digits */
    printf("%d\n",convert(n));

return 0;
}

/* Function to convert binary to decimal equivalent*/
int convert(n) {
    int decimal = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2, i);
        ++i;
    }
    return decimal;
}

//Program to convert binary digit of > 8 digits to decimal
