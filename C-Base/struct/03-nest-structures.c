// example of a nested structure
#include <stdio.h>
#define LEN 20

struct name {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct name handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};


int main(void) {
    struct guy jerry = {
        .handle = { "Jerry", "Case" },
        .favfood = "banner 炒米饭",
        .job = "程序员",
        .income = 8888
    };

    printf("Your name is %s %s, favorite food is %s, your job is %s. you income is $%.2f\n", jerry.handle.first, jerry.handle.last, jerry.favfood, jerry.job, jerry.income);

    return 0;
}
