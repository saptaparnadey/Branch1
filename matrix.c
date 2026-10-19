// wap to find sum of diagonal of a square matrix
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        sum += a[i][i];   
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}

// wap to add two matrices
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c], b[r][c], sum[r][c];


    printf("\nEnter elements of Matrix A:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Matrix B:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }


    printf("\nResultant Matrix (A + B):\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
