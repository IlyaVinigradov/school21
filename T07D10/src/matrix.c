#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 0, columns = 0;
    int move;
    int count = 0;
    int **pointer_array = NULL;

    scanf("%d", &move);
    switch (move) {
        case 1:
            if (scanf("%d %d", &rows, &columns) != 2 || rows != (int)rows || columns != (int)columns ||
                rows < 1 || columns < 1) {
                printf("n/a");
                break;
            }
            // for (int i = 0; i < rows; i++) {
            //     for (int j = 0; j < columns; j++) {
            //         if (scanf("%d", *matrix[i][j]) != 1 || matrix[i][j] != (int)matrix[i][j]) {
            //             printf("n/a");
            //             break;
            //         }
            //     }
            //     printf("\n");
            // }
            break;
        case 2:
            // if (scanf("%d %d", &rows, &columns) != 2 || rows != (int)rows || columns != (int)columns ||
            // rows < 1 || columns < 1) {
            // printf("n/a");
            // break;
            // }
            scanf("%d %d", &rows, &columns);
            int **singl_array_matrix = malloc(rows * columns * sizeof(int) + rows * sizeof(int *));
            int *ptr = (int *)(singl_array_matrix + rows);
            count = 0;

            for (int i = 0; i < rows; i++) {
                singl_array_matrix[i] = ptr + columns * i;
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    singl_array_matrix[i][j] = ++count;
                }
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    printf("%d ", singl_array_matrix[i][j]);
                }
                printf("\n");
            }
            free(singl_array_matrix);
        case 3:
            scanf("%d %d", &rows, &columns);
            **pointer_array = malloc(rows * sizeof(int *));
            int *values_array = malloc(rows * columns * sizeof(int));
            count = 0;

            for (int i = 0; i < rows; i++) {
                pointer_array[i] = values_array + columns * i;
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    pointer_array[i][j] = ++count;
                }
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    printf("%d ", pointer_array[i][j]);
                }
                printf("\n");
            }

            free(values_array);
            free(pointer_array);
        case 4:
            scanf("%d %d", &rows, &columns);
            count = 0;
            int **pointer_array = malloc(rows * sizeof(int *));

            for (int i = 0; i < rows; i++) {
                pointer_array[i] = malloc(columns * sizeof(int *));
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    pointer_array[i][j] = ++count;
                }
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    printf("%d ", pointer_array[i][j]);
                }
                printf("\n");
            }

            for (int i = 0; i < rows; i++) {
                free(pointer_array[i]);
            }

            free(pointer_array);
        default:
            printf("n/a");
            break;
    }
}