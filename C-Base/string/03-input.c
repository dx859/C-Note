#include <stdio.h>

/*
创建存储空间

gets: 
    gets()遇到\n(换行符)会结束。它会读取换行符之前所有的字符(不包括换行符)，然后在结尾加入\0。
    gets()会返回字符串的地址。如果遇到文件结束，也会返回一个空(0)地址。这个地址也被称为空指针。通常用NULL表示。所以可以加入一些错误检测。
        while(gets(name) != NULL)
    注意：gets()不检测预留存储区是否容纳足够多的数据。这样会字符溢出到临近的区域。

fgets:
    fgets()第二个参数规定最大读入字符数。
    fgets()第三个参数说明读取哪一个文件。如果从键盘上读取就使用stdin。
    fgets()遇到\n结束。但是\n也会存储到字符串中。

scanf:
    scanf与gets主要差别在于何时结束字符串。
    scanf有两种方式结束字符串：1. 指定字符串长度，如%10s。2. 空白字符。
    scanf返回读取的项目数
*/
void scanf_test(void) {
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2); 
    printf("I read the %d names: %s, %s\n", count, name1,name2);
    //注意：输入为 aaaaaaa bbbbbb时候结果为 aaaaa aaa
}


void gets_test(void) {
    // char *name; // 千万不要这么做，这样name就是野指针。指针声明后必须初始化。
    char name[80];
    char *ptr ;
    ptr = gets(name);

    printf("Your name is %s\n", ptr);
    printf("Your name is %s\n", name);
}

void gets_bug(void) {
    char msg[] = "Please input your name\n";
    char name[4];
    char price[] = "! It's a good name\n";

    puts(msg);
    gets(name);
    // 如果输入大于4个字节。name就会溢出。影响msg
    printf("%s%s%s\n",name, price, msg);
    // printf("%p\n%p\n%p\n", msg, name, price);
}

void fgets_test(void) {
    char name[81];
    char *ptr;

    ptr = fgets(name, 81, stdin);

    printf("Your name is %s", ptr);
}

int main(void) {

    // gets_test();
    // gets_bug();
    // fgets_test();
    scanf_test();

    return 0;
}

