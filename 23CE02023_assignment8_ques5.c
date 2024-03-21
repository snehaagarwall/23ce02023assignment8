
#include <stdio.h>

#define ROWS 3
#define COLS 3

void right_rotate_matrix(int (*mat)[COLS], int n) {
    int temp;

    // Perform right rotation 'n' times
    for (int rotation = 0; rotation < n; rotation++) {
        // Perform one rotation
        for (int layer = 0; layer < ROWS / 2; layer++) {
            int first = layer;
            int last = ROWS - 1 - layer;

            for (int i = first; i < last; i++) {
                temp = mat[first][i];
                mat[first][i] = mat[last - i + first][first];
                mat[last - i + first][first] = mat[last][last - i + first];
                mat[last][last - i + first] = mat[i][last];
                mat[i][last] = temp;
            }
        }
    }
}

void print_matrix(int (*mat)[COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = 2; // Number of right rotations

    printf("Original matrix:\n");
    print_matrix(matrix);

    right_rotate_matrix(matrix, n);

    printf("\nMatrix after %d right rotations:\n", n);
    print_matrix(matrix);

    return 0;
}