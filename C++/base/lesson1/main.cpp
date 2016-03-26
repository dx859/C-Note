#include <iostream>
#include <stdio.h>

using namespace std; // std 为命名空间，下面的cout和endl在std中定义了，标准库中所有的名字都在命名空间std中

int main() {
    // (<<) 输出运算符接受两个运算对象，左侧一个必须为ostream对象，右侧运算对象是要打印的值。
    // 同时返回左侧的运算对象，所以可以把多个输出请求连接起来。
    // endl被称为操纵符，相当于结束当前行，并且将设备关联的缓冲区(buffer)中的内容刷到设备上。
    cout << "Enter two numbers:" <<endl; 
    int v1 = 0, v2 = 0;
    // (>>)输入运算符与输出运算符相似，接受一个istream作为左侧运算对象。从给定的istream中读入数据，并存储给定的对象中
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " and " << v2 << " is " << v1+v2 << endl;

    return 0;
}
