#include <iostream>
#include <stdio.h>

using namespace std;

// C++中函数可以重载
void func(int a) {
    printf("%d\n", a);
}

void func(const char *s) {
    printf("%s\n", s);
}

// C++中函数可以有缺省值
int sum(int a, int b=10) {
    return a + b;
}

// C++中模版的概念
template <class T>
T sumtpl(T a, T b) {
    return a + b;
}

// 模版中缺省参数
template <class T>
T sumtpl(T a = 0) {
    return a;
}

int main(void) {
    func("hello world!");
    func(122);

    cout << sum(4) << " : " << sum(4, 5) << endl;
    cout << sumtpl(4, 6) << " : " << sumtpl(4.1, 5.3) << endl;

    return 0;
}