#include "stdio.h"

int main2()
{
    int a = 10, b = 20;
    (a < b ? a : b) = 30;

    printf("a=%d; b=%d\n", a, b);

    return 0;
}

int& j()
{
    static int a = 10;
    a++;
    printf("a:%d\n", a);
    return a;
}
int *j2()
{
    static int a = 10;
    a++;
    printf("a:%d\n", a);
    return &a;
}

int main()
{
    j() = 100; // 编译器帮我们做了一些事情：返回的是a的引用（内存地址），可以赋值。
    j();

    *(j2()) = 200; // 自己手动赋值，跟上面代码一样，只不过上面代码编译器帮我们做了
    j2();

    return 0;
}
