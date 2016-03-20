#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    double x = 2.2;
    double y = 1.6;

    // math 库文件的常用函数
    printf("x=%.2f\n", ceil(x));
    printf("x=%.2f\n", floor(x));
    printf("x=%.2f\n", sqrt(x));
    printf("x=%.2f\n", pow(3, 3));

    // ctype 库文件的常用函数
    char a = 'a';
    char B = 'B';
    printf("a=%c\n", toupper(a));
    printf("B=%c\n", tolower(B));

    // stdlib库文件的常用函数
    for (int i=0; i<10; i++) {
        printf("%d ", rand());
    }

    return 0;
}