#include <stdio.h>

void change(int *a, int *b) {
    int tmp=*a;
    *a=*b;
    *b=tmp; 
}


int main(void) {
    int a=5;
    int b=3;
    change(&a, &b);

    printf("a=%d, b=%d\n", a, b);
}

