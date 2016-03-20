#include <stdio.h>
/*
puts: 
    给出参数地址即可，会在结尾加上\n
    puts与gets一起设计的

fputs:
    第二个参数来说明要写的文件。如果输出到终端可以是stdout
    fputs不会在结尾添加换行符。
    fputs与fgets一起设计的。
    
printf:

*/

#define DEE "I am a #define string."

void puts_test() {
    char msg[] = "this is msg";
    // 注意定义字符串指针需要加上const，因为字符串为常量，不允许改变。
    const char *name = "jerry"; 

    // puts会读取指针位子字符串，直到碰到\0停止。
    puts("hello world");
    puts(DEE);
    puts(msg);
    puts(&msg[2]);
    puts(name);
    puts(name + 2);
}

void puts_danger() {
    // 千万不要这样做，直接读取字符数组。因为字符数组没有\0。这样如果程序后没没有\0的话puts会一直读下去。
    char side_a[] = "SIDE A";
    char dont[] = {'W', '0', 'W'};
    char side_b[] = "SIDE B";

    puts(dont);
}

void fputs_test() {
    char line[81];
    while(fgets(line , 81, stdin)) 
        fputs(line, stdout);
    
    puts("bye!");
}

int main(void) {
    // puts_test();
    // puts_danger();
    fputs_test();

    return 0;
}