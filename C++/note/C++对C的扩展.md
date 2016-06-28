# C++对C的扩展

## namespace命名空间

提供三中语法选择

1. 直接使用标识符：`std::cout`
2. 使用using关键字：`using std::cout`
3. 在开头声明：`using namespace std`

C++命名空间的定义： `namespace name {...}`

## register关键字

1. register关键字请求"编译器"将局部变量存储于寄存器中 C语言中无法取得register变量地址 在C++中依然支持register关键字 C++编译器有自己的优化方式，不使用register也可能做优化 C++中可以取得register变量的地址

2. C++编译器发现程序中需要取register变量的地址时，register对变量的声明变得无效。

## struct类型加强

C语言的struct定义了一组变量的集合，C编译器并不认为这是一种新的类型 C++中的struct是一个新类型的定义声明

## 新增Bool类型关键字

## 三目运算符的功能增强

```cpp
#include "stdio.h"

int main()
{
    int a = 10, b = 20;
    (a < b ? a : b) = 30;

    printf("a=%d; b=%d\n", a, b); // a=30; b= 20

    return 0;
}
```

**结论：**
> C语言返回变量的值 C++语言是返回变量本身
C语言中的三目运算符返回的是变量值，不能作为左值使用
C++中的三目运算符可直接返回变量本身，因此可以出现在程序的任何地方
三目运算符可能返回的值中如果有一个是常量值，则不能作为左值使用


# C++中的const

### const和 #define相同之处

C++中的const修饰的，是一个真正的常量，而不是C中变量（只读）。在const修饰的常量编译期间，就已经确定下来了。

### const和#define的区别

const常量是由编译器处理的，提供类型检查和作用域检查
宏定义由预处理器处理，单纯的文本替换

1.  C语言中的const变量:
    C语言中const变量是只读变量，有自己的存储空间

2.  C++中的const常量
    可能分配存储空间,也可能不分配存储空间  
    当const常量为全局，并且需要在其它文件中使用，会分配存储空间
    当使用&操作符，取const常量的地址时，会分配存储空间
    当const int &a = 10; const修饰引用时，也会分配存储空间
