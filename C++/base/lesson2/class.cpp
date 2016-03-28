#include <iostream>
#include <string.h>

using namespace std;

int age = 0;

class man
{
private:
    char name[100];
    int age;

public:
    void set_name(const char * s) {
        memset(name, 0, sizeof(name));
        if (strcmp(s, "tom") == 0)
            return;
        strcpy(name, s);
    }

    void set_age(int i) {
        age = i; // 设置成员变量
        ::age = i; // 在类的内部访问全局变量标识符::
    }
    
    // C++中，如果类函数返回的是成员变量的指针，为避免在类外部成员变量被修改，所以就要返回常量指针。
    const char * get_name() {
        return name;
    }

    int get_age() {
        return age;
    }
};

int main(void) {
    man m;

    m.set_name("merry");
    // char *p = m.get_name(); // 由于m.get_name()是指针，可以访问地址修改为tom， 可以使用const保护
    // strcpy(p, "tom"); //
    m.set_age(30);

    cout << m.get_name() << endl;
    cout << age << " " << m.get_age() << endl;

    return 0;
}