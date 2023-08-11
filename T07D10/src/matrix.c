#include <stdio.h>
#include <stdlib.h>

#define ROWS_MAX 100
#define COLUMNS_MAX 100

void output(int **a, int r, int c);

int main(void) {
    int rows = 0, columns = 0;
    int move;
    int matrix1[ROWS_MAX][COLUMNS_MAX];

    scanf("%d", &move);
    switch (move) {
        case 1:
            if (scanf("%d %d", &rows, &columns) != 2 || rows != (int)rows || columns != (int)columns ||
                rows < 1 || columns < 1) {
                printf("n/a");
                break;
            }
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    int temp;
                    int res = scanf("%d", &temp);
                    if (res != 1 || temp != (int)temp) {
                        printf("n/a");
                        break;
                    } else {
                        matrix1[i][j] = temp;
                    }
                }
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    printf("%d ", matrix1[i][j]);
                }
                printf("\n");
            }

            break;
        case 2:
            if (scanf("%d %d", &rows, &columns) != 2 || rows != (int)rows || columns != (int)columns ||
                rows < 1 || columns < 1 || getchar() != '\n') {
                printf("n/a");
                break;
            }
            int **matrix2 = malloc(rows * columns * sizeof(int) + rows * sizeof(int *));
            int *ptr_matrix2 = (int *)(matrix2 + rows);

            for (int i = 0; i < rows; i++) {
                matrix2[i] = ptr_matrix2 + columns * i;
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    int temp;
                    if (scanf("%d", &temp) != 1 || temp != (int)temp) {
                        printf("n/a");
                        free(matrix2);
                        return 1;
                    } else {
                        matrix2[i][j] = temp;
                    }
                }
            }

            output(matrix2, rows, columns);
            free(matrix2);

            break;
        case 3:
            if (scanf("%d %d", &rows, &columns) != 2 || rows != (int)rows || columns != (int)columns ||
                rows < 1 || columns < 1 || getchar() != '\n') {
                printf("n/a");
                break;
            }

            int **matrix3 = malloc(rows * sizeof(int *));
            for (int i = 0; i < rows; i++) {
                matrix3[i] = malloc(columns * sizeof(int));
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    int temp;
                    if (scanf("%d", &temp) != 1 || temp != (int)temp) {
                        printf("n/a");
                        free(matrix3);
                        return 1;
                        // break;
                    } else {
                        matrix3[i][j] = temp;
                    }
                }
            }

            output(matrix3, rows, columns);

            for (int i = 0; i < rows; i++) {
                free(matrix3[i]);
            }
            free(matrix3);
            break;
        case 4:
            if (scanf("%d %d", &rows, &columns) != 2 || rows != (int)rows || columns != (int)columns ||
                rows < 1 || columns < 1) {
                printf("n/a");
                break;
            }

            int **matrix4 = malloc(rows * sizeof(int *));
            int *ptr_matrix4 = malloc(rows * columns * sizeof(int));

            for (int i = 0; i < rows; i++) {
                matrix4[i] = ptr_matrix4 + columns * i;
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    int temp;
                    if (scanf("%d", &temp) != 1 || temp != (int)temp) {
                        printf("n/a");
                        free(matrix4);
                        free(ptr_matrix4);
                        return 1;
                    } else {
                        matrix4[i][j] = temp;
                    }
                }
            }

            output(matrix4, rows, columns);
            free(ptr_matrix4);
            free(matrix4);

            break;
        default:
            printf("n/a");
            break;
    }
}

void output(int **a, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}