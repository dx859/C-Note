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

/*
1. 函数的原型声明：
带有参数函数的原型声明
int imin(int n, int m);

也可以省略变量名
int imin(int, int);

但是不推荐旧的函数声明，即圆括号内不带任何参数
int imin();

2. 函数类型：
函数应该进行类型的声明，其类型与返回值相同，

 */