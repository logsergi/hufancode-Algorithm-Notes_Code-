//2.2.2(2)scanf函数的使用(2)
//%c可以读入空格和换行
#include <stdio.h>
int main(){
	int a;
	char c,str[10];
	scanf("%d%c%s",&a,&c,str);//空格此时既作为%d的结束，又残留在缓冲区里被%c读走了
	printf("a=%d,c=%c,str=%s",a,c,str);
	return 0;
}
