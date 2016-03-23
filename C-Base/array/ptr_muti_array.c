#include <stdio.h>

int main(void) {
    int zippo[4][2] = {{1,2},{3,7},{6,8},{9,2}};

    // 这四个地址都相同
    // printf("zippo=%p\n", zippo);
    // printf("&zippo[0]=%p\n", &zippo[0]);
    // printf("zippo[0]=%p\n",zippo[0]);
    // printf("&zippo[0][0]=%p\n", &zippo[0][0]);

    // putchar('\n');

    // // 通过指针获取zippo[2][1]的值
    // printf("&zippo[2]=%p\n", zippo+2);
    // printf("zippo[2]=%p\n", *(zippo+2));
    // printf("&zippo[2][1]=%p\n", *(zippo+2)+1);
    // printf("zippo[2][1]=%d\n", *(*(zippo+2)+1));

    // 声明包含2个int值的数组指针
    int (* pz)[2];
    pz = zippo;

    printf("zippo[2][1]=%d\n", *(*(pz+2)+1));
    printf("zippo[2][1]=%d\n", pz[2][1]);
    printf("zippo[2][1]=%d\n", *(pz[2]+1));


    return 0;
}
