#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_arr(int * ar, int n) {
    srand(time(NULL));
    for (int i=0; i<n; i++)
        *(ar+i) = rand() % 100;
}

void print_arr(int * ar, int n) {
    int i;
    for (i=0; i<n; i++)
        printf("%d ",*(ar+i));
    putchar('\n');
}

int main(void) {
    int a[10];

    init_arr(a, 10);
    print_arr(a, 10);

    return 0;
}
