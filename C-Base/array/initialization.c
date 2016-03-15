#include <stdio.h>

#define MONTHS 12
#define SIZE 4

void initialization(void);
void uninitialized(void);
void partinitialized(void);
void auto_count_length(void);
void de_init(void);
void assign_array(void);

int main(void) {
    
    // initialization();
    // uninitialized();
    // partinitialized();
    // auto_count_length();
    // de_init();
    assign_array();

    return 0;
}

void initialization(void) {
    // 声明数组
    int states[10];
    float candy[5];

    // 声明并且初始化数组
    int powers[6] = {1,3,43,12,45,2};

    // 使用const定义只读数组。
    const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (int i=0; i<MONTHS; i++)
        printf("%d月有%d天\n", i+1, days[i]);
}

void uninitialized(void) {
    int no_data[SIZE];

    // 为经过初始化的数组结果可能不确定
    for (int i=0; i<SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
}

void partinitialized(void) {
    int some_data[SIZE] = {123,2345};

    // 部分初始化的数组未初始化的部分为0
    for (int i=0; i<SIZE; i++)
        printf("%2d%14d\n", i, some_data[i]);
}

void auto_count_length(void) {
    // 当中括号不设定数组长度时并且初始化，编译器会自动计算数组的长度
    int days[] = {31,28,31,30,31,30,31,31,30,31};

    // 可以通过 sizeof days（数组总字节数）/sizeof days[0]（数组单一元素字节数）计算数组长度
    for (int i=0; i<sizeof days / sizeof days[0]; i++)
        printf("%d月有%d天\n", i+1, days[i]);

}

void de_init(void) {
    // 指定初始化项目
    int days[MONTHS] = {31,28, [4]=30,[11]=31};

    for (int i=0; i<MONTHS; i++)
        printf("%d月有%d天\n", i+1, days[i]);
}

void assign_array(void) {
    int arr[SIZE];
    // 为数组赋值
    for (int i=0; i<SIZE; i++) {
        arr[i] = i*i;
        printf("%2d\n", arr[i]);
    }
}

/*
注意：数组索引不能越界，如果越界编译器也不会报错。因为如果检查数组越界会影响C的性能。所以编程特别的要注意数组不能越界。
 */