#include <stdio.h>

// 函数的递归
void up_and_down(int);
int sum(int);
int factorial(int);

int main(void) {
   
    up_and_down(1);
    printf("%d\n", sum(4));
    printf("%d\n", factorial(4));


}

// 查看递归调用顺序
void up_and_down(int n) {
    printf("%d------%p\n", n, &n);

    if (n<4)
        up_and_down(n+1);

    printf("%d------%p\n", n, &n);
}

// 求 1+...+n 的和
int sum(int n) {
    if (n<=0)
        return 0;

    return n + sum(n-1);
}

// 求 阶乘
int factorial(int n) {
    if (n<=1)
        return 1;

    return n * factorial(n-1);
}