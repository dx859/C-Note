#include <iostream>

using namespace std;

class A
{
private:
    int a;

public:
    A(int _a)
    {
        a = _a;
        cout << "构造函数" << "a" << a << endl;
    }

    ~A()
    {
        cout << "析构函数" << "a" << a << endl;
    }
};

class B
{
private:
    int b1;
    int b2;
    A a1;
    A a2;
    const int c;

public:
    B(int _b1, int _b2) : a1(1), a2(2) , c(0)
    {

    }

    B(int _b1, int _b2, int m, int n) : a1(m), a2(n), c(0)
    {
        b1 = _b1;
        b2 = _b2;
        cout << "B的构造函数" << endl;
    }

    ~B() 
    {
        cout << "B的析构函数" << endl;
    }
    
};

int main()
{

    B objB(1, 2, 3, 4);


    return 0;
}