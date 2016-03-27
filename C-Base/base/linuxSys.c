#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// 注意，Linux下系统程序返回是16进制
	printf("%d\n",system("./hello") / 0x100);
	
	return 0;
}
