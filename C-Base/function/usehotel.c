#include <stdio.h>
#include "hotel.h"

int main(void) {
    int code, nights;
    double hotel_rate;

    while((code = menu()) != QUIT) {
        switch (code) {
            case 1: hotel_rate = HOTEL1;
                break;
            case 2: hotel_rate = HOTEL2;
                break;
            case 3: hotel_rate = HOTEL3;
                break;
            case 4: hotel_rate = HOTEL4;
                break;
            default: hotel_rate = 0.00;
                printf("Oop!\n");
                break;
        }
        nights = getnights();
        printf("您需要住%d晚，总价格为%0.2f。\n", nights, showprice(hotel_rate, nights));
    }

    return 0;
}

