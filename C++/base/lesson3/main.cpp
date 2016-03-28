#include <iostream>
// #include "single.h"
#include "mystring.h"

using namespace std;

int main(void) {

    // single *p = single::makesingle();
    // single *p2 = single::makesingle();
    // single::release();

    mystring *str1 = mystring::makestring("hello world");

    cout << str1->get_s() << endl;

    str1->set_s("bbbb");

    cout << str1->get_s() << endl;

    mystring::deletestring();

    mystring *str3 = mystring::makestring("aaaaaaa");

    cout << str3->get_s() << endl;

    mystring::deletestring();
    
    return 0;
}