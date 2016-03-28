#include <iostream>

using namespace std;

// 内联函数
inline int max(int a, int b) {
    return a > b ? a : b;
}


int main(void) {
    int *p = new int[10];

    for (int i=0; i<10; i++)
        p[i] = i;

    for (int i=0; i<10; i++)
        cout << p[i] << endl;

    // new 与 delete 成对使用
    delete []p; // 千万不要写成 delete p，这表示删除数组第一个元素
    p = NULL; // 如果指针为空指针
    delete p; // delete 不会报错，编译器会做优化
    
    for (int i=0; i<10; i++) {
        // 内联函数不作为函数调用，而是直接把内联函数的代码嵌入到代码中，适用于简单的代码
        int x = max(i, 5);
        cout << x << ' ';
    }


    return 0;
}