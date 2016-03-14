#include <stdio.h>

/*
多源代码程序的编译：
gcc file1.c file2.c
 */
void to_binary(unsigned long n);
int factorial(int n);
int sum(int n);

int main(void) {
    to_binary(10);
    putchar('\n');

    printf("%d\n", factorial(4));
    printf("%d\n", sum(-4));
}