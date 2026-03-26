//2.2.2(4)printf函数中使用转义字符
#include <stdio.h>
int main(){
	printf("abcd\nefg\n\nhijklmn");
	printf("\n");
	printf("%%,\\");
	return 0;
}
