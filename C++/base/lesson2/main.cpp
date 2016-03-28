#include <iostream>

using namespace std;

// 引用作为函数参数，没有堆栈操作
// 如果不想在函数内部修改外部的变量，使用const关键字
void swap(int &a, int &b) {
    a = 10;
    b = 20;
}

// 指针作为函数参数有，有堆栈操作，指针变量在堆中
void swap(int *a, int *b) {
    *a = 10;
    *b = 20;
}

int main(void) {


    return 0;
}