// wap to find all numbers which are divisible by 5 between 100 to 1000

#include <stdio.h>
int main() {
    int i;

for(i = 101; i < 1000; i++) {
    if(i % 5 == 0) {
        printf("%d ", i);
    }
}

    return 0;
}

// wap to find all ascii codes for 0 to 130
#include <stdio.h>

int main() {
    int i;

    for(i = 0; i <= 130; i++) {
        printf("%d -> %c\n", i, i);
    }

    return 0;
}

// wap to find perfect square who's first and last digits are also perfect square
#include <stdio.h>

int main() {
    int i, sq;

    for(i = 1; i * i <= 1000; i++) {
        sq = i * i;

        int last = sq % 10;      
        int first = sq;

        while(first >= 10) {     
            first /= 10;
        }

        if((first == 0 || first == 1 || first == 4 || first == 9) &&
           (last == 0 || last == 1 || last == 4 || last == 9)) {
            printf("%d\n", sq);
        }
    }

    return 0;
}

// wap to count number of digits in a number inputed
#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Number of digits = 1");
        return 0;
    }

    if(n < 0) {
        n = -n;  
    }

    while(n > 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits = %d", count);

    return 0;
}

// a number is entered through the keyboard. wap to add its digits.
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        n = -n;   // handle negative numbers
    }

    while(n > 0) {
        sum += n % 10;   // add last digit
        n /= 10;         // remove last digit
    }

    printf("Sum of digits = %d", sum);

    return 0;
}

// wap to find all armstrong numbers

#include <stdio.h>

int main() {
    int num, original, sum, digit;

    for(num = 1; num <= 1000; num++) {
        original = num;
        sum = 0;

        while(original > 0) {
            digit = original % 10;
            sum += digit * digit * digit;
            original /= 10;
        }

        if(sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}

// wap to find the first 20 digits of fibonacci series
#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, n3;
    int i;

    printf("%d %d ", n1, n2);

    for(i = 3; i <= 20; i++) {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
