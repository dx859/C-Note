#include <stdio.h>

int putstring(char *str) {
    int i=0;
    while(*str) {
        putchar(*str++);
        i++;
    }
    putchar('\n');
    return i;
}

int main(void) {
    int num;
    char str[] = "hello wrold";

    num = putstring(str);
    printf("%d\n", num);

    return 0;
}