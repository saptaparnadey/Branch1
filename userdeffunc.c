// Add Two Numbers Using User-Defined Function

#include <stdio.h>


int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    sum = add(a, b);

    printf("Sum = %d\n", sum);

    return 0;
}
