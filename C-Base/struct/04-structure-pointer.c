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
    struct guy fellow[2] = {
        {   
            .handle = { "Jerry", "Case" },
            .favfood = "banner 炒米饭",
            .job = "程序员",
            .income = 8888
        }, {   
            .handle = { "Rose", "Dssyy" },
            .favfood = "banner 炒米饭",
            .job = "程序员",
            .income = 8888
        }
        
    };

    struct guy *him;
    him = &fellow[0];
    printf("address #1: %p;#2: %p\n", &fellow[0], &fellow[1]);
    printf("him->incomeis $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
    him++;
    printf("him->favfood $%s: him->handle.first is %s\n", him->favfood, him->handle.first);

    return 0;
}

/*
1. Declaration is as easy as can be:
struct guy *him;

2. Unlike the case for arrays, the name of structure is not the address of the structure; You need to use the & operator
him = &fellow[0];

3. member access by pointer has tow methods.
    him->income
    (*him).income
 */
