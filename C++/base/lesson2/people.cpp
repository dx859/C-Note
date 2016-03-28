#include <string.h>
#include <iostream>
#include "people.h"

using namespace std;

// 也可以使用初始化成员列表 : 成员变量(值)，只能在构造函数中用
// 在类声明中不能初始化成员变量。如果是个const常量，必须在初始化成员列表中赋值。
// 引用数据成员必须用初始化成员列表赋值
people::people() : age(10), name(NULL) {
    // 在构造函数里面初始化
    cout << "people" <<endl;
    // memset(name, 0, sizeof(name));
    name = new char[100];
    age = 0;
}

people::people(const char *s) {
    strcpy(name, s);
}

// C++有一个原则，在构造函数中如何分配内存，就必须在析构函数中销毁掉
people::~people() {
    delete []name;
    cout << "class is destroy" << endl;
}

void people::set_name(const char * s) {
    memset(name, 0, sizeof(name));
    if (strcmp(s, "tom") == 0)
        return;
    strcpy(name, s);
}

void people::set_age(int i) {
    age = i;

}

const char * people::get_name() {
    return name;
}

int people::get_age() {
    return age;
}
