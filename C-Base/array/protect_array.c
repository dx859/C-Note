#include <stdio.h>

int sum(const int ar[], int n);
void mult_array(int *ar, int n, double mult);
void print_array(int *arr, int n);

/*通常情况下我们不想通过函数改变数组的内容，可以通过const来对形参修饰指针避免被修改*/

int main(void) {
    int arr[5] = {1,2,3,4,5};

    printf("%d\n",sum(arr, 5));
    
    print_array(arr, 5);
    mult_array(arr, 5, 2);
    print_array(arr, 5);

    return 0;
}

int sum(const int ar[], int n) {
    int total = 0;

    for (int i=0; i<n; i++)
        total += ar[i];
    
    return total;
}

void mult_array(int *ar, int n, double mult) {

    for (int i=0; i<n; i++)
        *(ar+i) *= mult;
}

void print_array(int *arr, int n) {
    for (int i=0; i<n; i++)
        printf("%d ", *(arr+i));

    putchar('\n');
}