#include <stdio.h>
// 相当于给 int 类型起别名为 ssize_t
// 为什么要起别名：当int类型不能满足我们的需求时候，需要long类型才够用，这是后只需要改：typedef ssize_t long;
// 这是一种封装的思想
typedef int size;

typedef struct complex {
    float real;
    float imag;
} COMPLEX;

size mystrlen(char *str)
{
    
}


int main(void)
{
    char *s = "hello";
    printf("%d\n", mystrlen(s));

    return 0;
}
/*
    typedef 与 #define 的区别：
    1. typedef 只适用于类型，而不是对值
    2. typedef 解释由编译器，而不是于处理器
    3. 在一定的范围内，typedef 比 #define 更加灵活
        #define BYTE unsigned char
        在一定情况下#define也不能使用：
        typedef char * STRING
        STRING name, sign; => char * name, * sign;
        但是如果使用#define定义
        #define STRING char *
        就会被识别为：char * name, sign;
 */
