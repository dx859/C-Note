#include <stdio.h>

#define MSG "You must have many talents. Tell me some"
#define LIM 5
#define LINELEN 81

int main(void) {
    char name[LINELEN];
    char talents[LINELEN];
    int i;
    // 初始化确定大小的char数组
    const char m1[40] = "Limit yourself to one line's wroth. ";
    // 让编译器自己计算大小
    const char m2[] = "If you can't think of anything, fake it!";
    // 初始化一个指针
    const char *m3 = "Englisth about me - what's your name? ";

    const char *mytal[LIM] = {
        "Adding numbers swiftly",
        "Multiplaying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };

    printf("Hi! I'm Clyde the Computer. " "I have my talents. \n");

    for (i=0; i<LIM; i++)
        puts(*(mytal+i));

    printf("Hi! What's your name?\n");
    // gets(name);

    // printf("%s ! it's a nice name.", name);

    char hello[] = "hello";
    *(hello + 3) = '\0';
    puts(hello); // hel 程序输出字符串时候碰到\0会终止，认为字符串结束

    return 0;
}

/*
字符串常量，是一对双引号中的任何字符。
双引号力里面的字符加上编译器自动提供的结束标志\0字符。作为一个字符串存储在内存中。
如果字符串之间没有间隔或者间隔为空格。ANSIC会将其串联起来。
如果在字符串中使用双引号。可以使用\。
字符串输出时候碰到\0会认为字符串结束。
*/