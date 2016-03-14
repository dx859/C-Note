#include <stdio.h>
#include <string.h>

#define NAME "DAI XI"
#define ADDRESS "Hubei Wuhan HuangPi"
#define WIDTH 40

/*
// 声明函数
void starbar(void);

// 一个简单的函数
int main(void)
{

    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    starbar();

    return 0;    
}

void starbar(void)
{
    for (int i = 0; i < WIDTH; ++i)
        putchar('*');
    putchar('\n');
}
*/

void show_n_char(char ch, int num);

int main(void)
{
    show_n_char('*', WIDTH);
    putchar('\n');
    show_n_char(' ', (WIDTH - strlen(NAME)) / 2);
    printf("%s\n", NAME);
    show_n_char(' ', (WIDTH - strlen(ADDRESS)) / 2);
    printf("%s\n", ADDRESS);
    show_n_char('*', WIDTH);
    putchar('\n');
    return 0;
}

void show_n_char(char ch, int num)
{
    for (int i=0; i<num; i++) putchar(ch);
}