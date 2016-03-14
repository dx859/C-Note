#include <stdio.h>

void to_binary(unsigned long n);
int factorial(int n);
int sum(int n);

int main(void) {
    to_binary(10);
    putchar('\n');

    printf("%d\n", factorial(4));
    printf("%d\n", sum(-4));
}

/**
 * 10进制转2进制
 * @param n [description]
 */

void to_binary(unsigned long n) {
    int r = n % 2;

    if (n >= 2)
        to_binary(n / 2);

    putchar('0' + r); // '0' + 0 => '0' ; '0' + 1 => '1'

    return;
}

/**
 * 循环求阶乘
 * @param  n 阶乘数
 * @return   阶乘结果
 */

int factorial(int n) {
    int ans = 1;

    if (n >= 1)
        for (int i=1; i<=n; i++) 
            ans *= i;
    else
        ans = 1;

    return ans;
}

/**
 * 循环求加法和：1+2+3+...+n   
 * @param  n 最大整数
 * @return   求和
 */

int sum(int n) {
    int ans = 0;

    if (n >= 0) 
        for (int i=1; i<=n; i++)
            ans += i;
    else
        for (int i=-1; i>=n; i--)
            ans += i;

    return ans;
}