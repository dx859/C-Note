#include <stdio.h>
#include "hotel.h"

/**
 * 选择旅馆菜单
 * @return 返回选择的菜单
 */

int menu(void) {
    int num, status;
    printf("%s%s\n", STARS, STARS);
    printf("选择你所需要的旅馆\n");
    printf("1) 七天连锁酒店        2) 天上人间\n");
    printf("3) 高级会所           4) 长海沙滩\n");
    printf("5) 退出\n");
    printf("%s%s\n", STARS, STARS);

    while((status = scanf("%d", &num)) != 1 || (num > 5 || num < 1)) {
        if (status !=1 )
            scanf("%*s");
        printf("请输入 1 到 5 的数字\n");
    }
    return num;
}

/**
 * 选择住几晚
 * @return  返回几晚
 */

int getnights(void) {
    int nights;
    printf("您需要住几晚：");
    while(scanf("%d", &nights) != 1) {
        scanf("%*s");
        printf("请输入数字\n");
    }
    return nights;
}

/**
 * 计算旅馆总价格
 * @param  rate   每晚价格
 * @param  nights 总的天数
 * @return        总价格
 */

double showprice(double rate, int nights) {
    double total = 0.0;
    double factor = 1.0;
    for (int i=1; i<=nights; i++, factor *= DISCOUNT)
        total += factor * rate;
    return total;
}