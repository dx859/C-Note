#include <stdio.h>

void bubble_sort(int arr[], int n) {
    int i, j, tmp;
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            if (*(arr+i) > *(arr+j)) {
                tmp = *(arr+i) ;
                *(arr+i)  = *(arr+j) ;
                *(arr+j) = tmp;
            }
        }
    }
}

void reversal(int arr[], int n) {

}

void print_array(int arr[],int n) {
    for (int i=0; i<n ; i++) {
        printf("%d ", arr[i]);
    }
    putchar('\n');
}


int main(void) {
    int arr[5] = {1,3,54,61,2};
    bubble_sort(arr, 5);
    print_array(arr, 5);
    return 0;
}