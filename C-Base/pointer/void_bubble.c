#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void show_array(int a[], int n)
{
    int i;
    for (i=0; i<n; i++)
        printf("%d ", a[i]);
    putchar('\n');
}
void init_array(int a[], int n)
{
    int i;
    srand(time(NULL));
        for (i=0; i<n; i++)
            a[i] = rand() % 100;
}

int cmp_int(void *a, void *b)
{
    int x = *((int *)a);
    int y = *((int *)b);
    return x > y;
}
void swap(void *a, void *b) {
    int tmp;
    tmp = *((int *)a);
    *((int *)a) = *((int *)b);
    *((int *)b) = tmp;
}

void bubble_sort(void * a, int n, int(*cmp)(void *, void *), void (*swap)(void *, void *))
{
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<n-i-1; j++)
            if(cmp((void *)((int *)a+j),(void *)((int *)a+j+1)) > 0)
                swap((void *)((int *)a+j), (void *)((int *)a+j+1));
}

int main(void)
{
    int a[10];
    init_array(a, 10);
    show_array(a, 10);
    bubble_sort(a, 10, cmp_int, swap);
    show_array(a, 10);
    
    char *s[5] = {"hello", "wrold", "xwp", "itcast", "row"};

    return 0;
}

