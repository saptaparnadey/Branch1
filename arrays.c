// wap to print the list of 10 numbers in ascending order
#include <stdio.h>

int main() {
    int a[10] = {5, 1, 9, 3, 7, 4, 0, 2, 8, 6}; 
    int i, j, temp;


    for(i = 0; i < 10; i++) {
        for(j = i + 1; j < 10; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    printf("Ascending order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// wap to print the minimum among an array of 10 numbers
#include <stdio.h>

int main() {
    int arr[10] = {12, -5, 33, 7, 0, 19, -12, 45, 3, 8};
    int min = arr[0];

    for(int i = 1; i < 10; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum number = %d\n", min);

    return 0;
}
