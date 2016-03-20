#include <stdio.h>

void print_arr(int rows, int cols, int arr[rows][cols]) {
    int i, j;
    for (i=0; i<rows; i++) {
        for (j=0; j<cols; j++) {
            printf("%d ", *(*(arr+i)+j));
        }
        putchar('\n');
    }
}

int main(void) {
    int arr[3][4] = {
        {2,312,412,34},
        {32,43,12,3},
        {21,3,45,2}
    };
    print_arr(3, 4, arr[3][4]);

    return 0;
}

