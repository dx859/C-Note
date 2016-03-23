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

/*
结构体定义可以简化不带标记
struct {
    char title[MAXTITL];
    char author[MAXAUTL];
    float price; 
} library

也可以上面多个结构变量
struct book doyle, panshin , * ptbook;

也可以声明的时候初始化结构体
struct book library = {
    "The Pious Pirate and the Devious Damsel",
    "Renee Vivotte",
    1.95
}

访问结构体成员
使用 结构体名.成员名：library.title

C99中可以使用点语法初始化结构体，并且无需按照顺序
struct book gift = {
    .value = 23.34
    .author = "James Broadfool",
    .title = "Rue for the Toad"
}

 */