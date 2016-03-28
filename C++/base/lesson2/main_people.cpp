#include <iostream>
#include "people.h"

using namespace std;

typedef struct {
    int a;
    int b;
} demo;


// C++ 类的本质，就是结构的数据成员加可执行的代码，统一提供封装，继承，多态。
// 类里面没有权限限定，默认是private
// 但是在结构内部，没有权限限定默认是public
// 在C++中的结构可以使用public private关键字
// C++中结构甚至可以封装函数
int main(void) {

    demo a1;
    a1.a = 10;
    a1.b = 20;

    demo a2 = a1;

    // 常量对象，类所有的成员都不能改变
    // 注意：方法后面必须要有const
    const people m; 
    people man;
    people man2 = man; // 拷贝构造函数，浅拷贝，两个对象之间成员变量简单的赋值
    // people man("lisi");


    // man.set_name("daixi");
    cout << man.get_name() << endl;
    cout << "man size = " << sizeof(man) << endl;

    return 0;
}
