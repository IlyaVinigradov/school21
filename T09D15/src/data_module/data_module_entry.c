#include <stdio.h>

#include "data_process.h"

int main(void) {
    double temp;
    if (scanf("%lf", &temp) != 1 || temp != (int)temp) {
        printf("ERROR");
        return 1;
    }
    int n = temp;
    double data[n];

    // Don`t forget to allocate memory !

    if (input(data, n) == -1) {
        printf("ERROR");
        return 1;
    }

    if (normalization(data, n)) {
        output(data, n);
        return 0;
    } else {
        printf("ERROR");
        return 1;
    }
    return 0;
}
