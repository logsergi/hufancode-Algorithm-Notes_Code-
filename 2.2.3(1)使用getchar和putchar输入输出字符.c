//2.2.3(1)使用getchar和putchar输入输出字符
#include <stdio.h>
int main(){
	char c1,c2,c3;
	c1=getchar();
	getchar();//没有被某个变量接收
	c2=getchar();
	c3=getchar();
	putchar(c1);
	putchar(c2);
	putchar(c3);
	return 0;
}
