#include <stdio.h>

int main() {
    int rows, cols;
    
    // Input number of rows and columns
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Find the maximum element in each row
    printf("Maximum elements in each row:\n");
    for (int i = 0; i < rows; i++) {
        int max = matrix[i][0];
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        printf("Row %d: %d\n", i + 1, max);
    }
    
    return 0;
}
