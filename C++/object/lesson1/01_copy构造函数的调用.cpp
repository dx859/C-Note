#include <iostream>

using namespace std;

class Test
{
private:
    int m_a;
    int m_b;

public:
    Test ()
    {
        cout << "中文" << endl;
        m_a = 0;
        m_b = 0;
    }

    Test (int a)
    {
        cout << "one" << endl;
        m_a = a;
        m_b = 0;
    }

    Test (int a, int b)
    {
        cout << "two" << endl;
        m_a = a;
        m_b = b;
    }

    Test (const Test& obj)
    {
        cout << "copy" << endl;
        m_b = obj.m_b + 100;
        m_a = obj.m_a + 100;
    }

    ~Test ()
    {

    }

};

int main()
{
    Test t1;
    Test t2(1, 2);
    Test t3 = t1;

    return 0;
}
