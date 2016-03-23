#include <stdio.h>
#include <stdlib.h>

int rollem() {
    return rand() % 6 + 1;
}

int main(void) {
    
    for (int i=0; i<10; i++) {
        printf("%d ", rollem());
    }
    putchar('\n');

    return 0;
}