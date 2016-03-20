#include <stdio.h>

#define MAXTITL 41
#define MAXAUTL 31

// 定义结构体
struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float price;
};

void putbook(void) {
    struct book library;

    puts("Please enter the book title");
    gets(library.title);
    puts("Please enter the author name");
    gets(library.author);
    puts("Please enter the book price");
    scanf("%f", &library.price);

    printf("Your book name: %s, the author: %s, the price: %.2f\n", library.title, library.author, library.price);

}

int main(void) {
    putbook();

    return 0;
}