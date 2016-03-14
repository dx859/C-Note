#include <stdio.h>

int imin(int n, int m);

int main(void) {
    int num1, num2;

    printf("请输入两个整数\n");
    while( scanf("%d %d", &num1, &num2) == 2) {
        printf("%d 和 %d 中 %d 较小\n", num1, num2, imin(num1, num2));
    }
    printf("Bye!\n");

    return 0;
}

int imin(int n, int m) {
    return (n>m) ? m : n;
}