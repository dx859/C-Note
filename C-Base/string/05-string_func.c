#include <stdio.h>
#include <string.h>

/*
字符串常用的函数

strlen():
    返回字符串的长度。通过它可以缩短字符串。

strcat():
    接受2个参数，将第二个字符串拷贝到第一个字符串结尾。第二个字符串并没有改变。
    返回第一个参数的地址。
    注意：strcat不检测第一个字符数组的长度是否能够容纳第二个字符串。这回有溢出的问题。

strncat():
    strncat比stract多一个参数。用来指定最多添加的字符数目。

strcmp():
    字符串的比较，由于==比较的是指针。所以有时不能用。strcmp真正比较的是字符。
    返回值：strcmp(a, b)
        相同返回0
        a>b 返回正数可能是1 这是比较ASCII
        a<b 返回负数可能是-1 这是比较ASCII
    
*/

char * cut_string(char * str, unsigned int len) {
    if (strlen(str) > len)
        *(str+len) = '\0';
    return str;
}

void strcat_test(void) {
    char name[] = "Michael"; 
    char surname[] = "Jordan";

    puts(strcat(name, surname));
}

void compare_str(void) {
    const char *answer = "3";
    char try[5];
    puts("1+2=?");
    gets(try);
    while(strcmp(try,answer)) {
        puts("1+2=?");
        gets(try);
    }
    puts("your are right!");
} 

int main(void) {
    // char name[] = "Michael·Jordan";
    // cut_string(name, 7);
    // puts(name); // Michael
    // puts(name+9);   // Jordan

    // strcat_test();
    compare_str();

    return 0;
}