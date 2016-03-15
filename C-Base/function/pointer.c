#include <stdio.h>

void interchange(int * u, int * v);

int main(void) {
    int num1 = 2, num2 = 1;
    interchange(&num1, &num2); // 传入的是地址而不是值。

    printf("num1=%d, num2=%d\n", num1,num2);
    return 0;
}

/**
 * 两个整数值交换
 * @param u [description]
 * @param v [description]
 */

void interchange(int * u, int * v) { // 这里 u,v被声明为指针
    int tmp;

    tmp = *u; // *u ,*v 可以通过地址获取值。
    *u = *v;
    *v = tmp;
}

/*
其实在scanf函数中已经使用指针的调用。
 */