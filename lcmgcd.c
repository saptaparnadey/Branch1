// wap to find the lcm of 2 numbers
#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    tempA = a;
    tempB = b;

    while(tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    gcd = tempA;

    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

// wap to find the gcd of two numbers

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while(tempB != 0) {
        remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }

    printf("GCD of %d and %d is %d\n", a, b, tempA);

    return 0;
}
