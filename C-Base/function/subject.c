#include <stdio.h>

// 判断整数有多少位
int num_of_integer(int x) {
    if (x < 10 && x > -10)
        return 1;
    else
        return num_of_integer( x / 10) +1;
}

int num_of_integer_loop(int x) {
    int i = 1;
    while(x > 10 || x < -10) {
        x = x / 10;
        i++;
    }
    return i;
}

// 检测一个数是否为质数
bool isprime(int x) {
    for (int i=2; i<x; i++) {
        for (int j=2; j<x; j++) {
            if (i * j == x)
                return true;
        }
    }
    return false;
}

// 实现1*2 + 3*4 + 5*6 +***+99*100的递归函数
int sum_mult(int x) {
    if (x <= 2) 
        return x * (x-1);
    else 
        return sum_mult(x-2) + x * (x-1);
}

int main(void) {
    printf("%d\n", num_of_integer( 1020 ));
    printf("%d\n", num_of_integer_loop( -1212130 ));
    printf("%d\n", isprime(8));

    printf("%d\n", sum_mult(4));
    return 0;
}
