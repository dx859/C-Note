#include <iostream>
#include <stdio.h>

using namespace std;

// 通过引用交换变量
void myswap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

// 通过指针交换变量
void myswap2(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void) {
    int a = 5, b = 10;
    myswap(a, b);
    // myswap2(&a, &b);

    // c就是a的别名，用用不能独立存在，一定要赋值。并且永远是a，不能改变
    int &c = a; 
    printf("c = %p\na = %p \n", &c, &a);

    cout << "a=" << a << " b=" << b << endl;

    return 0;
}

