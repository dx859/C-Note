#include <stdio.h>

#define SIZE 4
#define MONTHS 12

int main(void) {
    short dates[SIZE];
    short * pri;
    float bills[SIZE];
    float * prf;

    pri = dates; // 数组地址赋值给指针：数组名是该数组第一个元素的地址
    prf = bills;

    /*
    pointer + 0: 0x7fff5e4bac40 0x7fff5e4bac30
    pointer + 1: 0x7fff5e4bac42 0x7fff5e4bac34
    pointer + 2: 0x7fff5e4bac44 0x7fff5e4bac38
    pointer + 3: 0x7fff5e4bac46 0x7fff5e4bac3c

    在C中，给指针加1是对该指针加一个存储单元。对数字而言。地址会增加到下一个元素地址，而不是下一个字节。

    注意：
        1. 指针的数值标识它所指向对象的地址，地址内部表示方式由硬件来决定
        2. 在指针前面运行运算符*可以得到该指针所指向的对象的数值。
        3. 对指针加1，等价于对指针值加上它所指向的对象的字节大小。

    案例：
        dates + 2 == &datas[2] // dates表示指针， 指针+2表示 datas第二个元素的地址
        *(dates + 2) == datas[2] // 标识相同的值
        *dates + 2 // 标识dates第0个元素加2
     */

    for (int i=0; i<SIZE; i++)
        printf("pointer + %d: %10p %10p\n", i, pri+i, prf+i);


    // 案例：使用指针输出月份
    const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i=0; i<MONTHS; i++)
        printf("%2d 月有 %d 天\n", i+1, *(days+i));

    return 0;
}