#include <stdio.h>


/* 指针变量执行的基本操作 */


int main(void) {
    int urn[5] = {100,200,300,400,500};
    int *ptr1, *ptr2, *ptrs;
    // 对指针操作要注意：指针不能越界。并且一定要初始化指针。

    // 1.指针的赋值（assignment）
    ptr1 = urn;
    ptr2 = &urn[2];

    // 2.指针的求值或取值
    // 3.取指针的地址
    printf("*ptr1=%d : ptr1=%p\n", *ptr1, ptr1);
    printf("*ptr2=%d : ptr2=%p\n", *ptr2, ptr2);

    // 4.将一个整数加给指针
    ptr1 += 1;
    printf("*ptr1=%d : ptr1=%p\n", *ptr1, ptr1);

    // 5.指针减去一个整数
    ptr2 -= 1;
    printf("*ptr2=%d : ptr2=%p\n", *ptr2, ptr2);

    return 0;
}
