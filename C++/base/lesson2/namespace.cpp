#include <iostream>

using namespace std;

// 无名命名空间，匿名，外面不能调用
namespace {
    void func(void) {
        cout << "Hello" << endl;
    }
}

namespace lisi {
    void func(void) {
        cout << "Hello, lisi" << endl;
    }
}

namespace zhangsan {
    void func(void) {
        cout << "Hello, zhangsan" << endl;
    }
}


int main(void) {
    lisi::func();
    zhangsan::func();

    return 0;
}