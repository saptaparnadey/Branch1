// wap to create a simple calculator
#include <stdio.h>

int main() {
    float a, b;
    char op;

    scanf("%f %f %c", &a, &b, &op);

    switch(op) {
        case '+': printf("%f", a + b); break;
        case '-': printf("%f", a - b); break;
        case '*': printf("%f", a * b); break;
        case '/': printf("%f", a / b); break;
        default: printf("Invalid operator");
    }

    return 0;
}
