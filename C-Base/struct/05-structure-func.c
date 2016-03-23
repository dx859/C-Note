#include <stdio.h>
#define FUNDLEN 50

struct funds {
    char    bank[FUNDLEN];
    double  bankfund;
    char    save[FUNDLEN];
    double  savefund;
};

// passing the structure memebers as arguments
double sum(double x, double y) {
    return x + y;
}

// passing a pointer to structure
double sum_pt(const struct funds *ptr) {
    return (ptr->bankfund + ptr->savefund);
}

// passing a structure
double sum_str(const struct funds moolah) {
    return (moolah.bankfund + moolah.savefund);
}

int main(void) {
    struct funds stan = {
        .bank = "中国银行",
        .bankfund = 3234.4,
        .save = "工商银行",
        .savefund = 1000
    };

    printf("Stan has a total of $%.2f\n", sum(stan.bankfund, stan.savefund));
    printf("Stan has a total of $%.2f\n", sum_pt(&stan));
    printf("Stan has a total of $%.2f\n", sum_str(stan));

    return 0;
}