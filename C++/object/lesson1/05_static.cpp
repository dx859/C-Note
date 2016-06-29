#include <iostream>

using namespace std;

class Person
{
private:
    string name;
    static int num;

public:
    Person(string name)
    {
        num++;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    static int getNum()
    {
        //静态函数中 不能使用 普通成员变量 普通成员函数 ..
        return num;
    }
    ~Person() {}
    
};

// 初始化静态变量
int Person::num = 0;

int main()
{
    Person p1("张三");
    cout << p1.getName() << " num:" <<  Person::getNum() << endl;

    Person p2("李四");
    cout << p2.getName() << " num:" <<  Person::getNum() << endl;

    return 0;
}