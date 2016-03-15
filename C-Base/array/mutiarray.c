#include <stdio.h>

int main(void) {
    int classes[4][10] = {
        {1,2,3,4,5,6,7,8,9,10},
        {20,19,18,17,16,15,14,13,12,11},
        {20,19,18,17,16,15,14,13,12,11},
        {1,2,3,4,5,6,7,8,9,10},
    };

    for (int i=0; i<4; i++) {
        for (int j=0; j<10; j++)
            printf("%2d ", classes[i][j]);
        putchar('\n');
    }

    return 0;
}


