#include <stdio.h>
/*
数组作为形参可以声明的方式
声明：
    int sum(int *ar, int n);
    int sum(int *, int);
    int sum(int ar[], int n);
    int sum(int [], int);
 */

int sum(int * ar, int n);
int sump(int * start, int * end);

int main(void) {

    int arr[5] = {1,3,4,6,5};
    int len = sizeof arr / sizeof arr[0];

    printf("%d\n", sum(arr, len));

    printf("%d\n", sump(arr, arr+5));

    return 0;
}


/**
 * 计算数组元素的和
 * @param  ar 数组
 * @param  n  数组长度
 * @return    数组元素的和
 */

int sum(int * ar, int n) {
    int total = 0;

    for (int i=0; i<n; i++)
        total += *(ar+i);

    return total;
}

/**
 * 计算数组元素的和（指针方法）
 * @param  start 数组开始指针
 * @param  end   数组结束指针
 * @return       数组元素的和
 */

int sump(int * start, int * end) {
    int total = 0;

    while (start < end) {
        // total += *start; // 把值累加到total
        // start ++; // 把指针前进到下一个元素
        // 精简的写法
        total += *start++; 
        // 注意：* 和++ 具有相等的优先级。但是结合的时候从右到左进行。++作用与start而不是*start
        // 为了清晰可见，写法应为：total += *(start++)
    }
    return total;
}