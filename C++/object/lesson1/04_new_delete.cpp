#include <iostream>
#include "stdlib.h"

using namespace std;

/*
    malloc  free            c语言的函数
    new     delete          操作符 c++的语法
*/

// 分配基础类型
int main2()
{
    int *p = new int;
    *p = 20;

    int *p2 = new int(40);

    cout << *p << endl;
    cout << *p2 << endl;

    delete p;
    delete p2;

    cout << *p << endl;
    cout << *p2 << endl;

    return 0;
}

int main3()
{
    int *p = new int[10];
    p[1] = 2;
    delete [] p;

    char *p2 = new char[20];
    delete [] p2;



    return 0;
}

// new能执行类型构造函数   delete操作符 能执行类的析构函数
class Test
{
private:
    int a;

public:
    Test(int a)
    {
        this->a = a;
        cout << "构造函数执行" << endl;
    }
    ~Test()
    {
        cout << "析构函数执行" << endl;
    }
    
};

int main()
{
    // malloc 和 free 不会执行构造析构函数，它只是单纯的分配存储空间
    Test *p1 = (Test *)malloc(sizeof(Test));
    free(p1);

    cout << "start ..." << endl;

    Test *p2 = new Test(10);
    delete p2;

    cout << "end ..." << endl;

    return 0;
}