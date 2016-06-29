#include <iostream>

using namespace std;

class Complex
{
public:
    int a;
    int b;
    static int num;

public:
    Complex(int a=0, int b=0)
    {
        cout << "num:" << ++num << endl;
        this->a = a;
        this->b = b;
    }
    void print()
    {
        cout << a << " + " << b << endl;
    }
    ~Complex() {}
    
};

int Complex::num = 0;

Complex operator+(Complex &c1, Complex &c2)
{
    Complex tmp(c1.a + c2.a, c1.b + c2.b);
    return tmp;
}

int main()
{
    Complex c1(1, 2);
    Complex c2(2, 4);

    // Complex c3;
    // c3 = c1 + c2; // c1 + c2 的值拷贝c3 ，相当于Complex有4个对象，c1,c2,匿名对象,c3
    // c3.print();

    Complex c4 = c1 + c2; // c1 + c2 的值赋值给c4，相当于Complex有3个对象，c1,c2,c4
    c4.print();
    //总结: 运算符重载的本质 是 函数调用 

    return 0;
}