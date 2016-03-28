#include <string.h>
#include <iostream>
#include "mystring.h"

using namespace std;

mystring *mystring::self = NULL;

mystring *mystring::makestring(const char *s)
{   
    if (self == NULL) {
        if (s == NULL)
            self = new mystring;
        else
            self = new mystring(s);
    }

    return self;
}

void mystring::deletestring()
{
    if (self != NULL) {
        delete self;
        self = NULL;
    }
}

mystring::mystring(): s(NULL)
{

}

mystring::mystring(const char *s)
{
    int len = strlen(s);
    this->s = new char[len + 1];
    strcpy(this->s, s);
    this->s[len] = 0;
}

mystring::mystring(const mystring &it) // 通过拷贝构造实现深拷贝，避免成员变量指针赋值导致的错误
{
    int len = strlen(it.get_s());
    this->s = new char[len + 1];
    strcpy(this->s, it.s);
    this->s[len] = 0;
}

mystring::~mystring()
{
    cout << "the >> " << s << " << destory" << endl;
    delete []s;
}

const char *mystring::get_s() const
{
    return s;
}

void mystring::set_s(const char *s)
{
    if (this->s == NULL) {
        int len = strlen(s);
        this->s = new char[len + 1];
        strcpy(this->s, s);
        this->s[len] = 0;
    } else {
        int len1 = strlen(this->s);
        int len2 = strlen(s);

        if (len1 > len2) {
            strcpy(this->s, s);
            this->s[len2] = 0;
        } else {
            delete []this->s;
            this->s = new char[len2 + 1];
            strcpy(this->s, s);
            this->s[len2] = 0;
        }
    }

}

