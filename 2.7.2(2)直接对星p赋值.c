//2.7.2(2)直接对星p赋值
#include <stdio.h>
int main(){
	int a;
	int* p=&a;//给指针p赋值a的地址
	*p=233;//给这个地址中的值改变为233
	printf("%d, %d\n",*p,a);
	return 0;
}
