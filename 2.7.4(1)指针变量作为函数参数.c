//2.7.4(1)指针变量作为函数参数
#include<stdio.h>
void change(int* p){//传入指针p，也即传入了一个地址
	*p=233;
}

int main(){
	int a=1;
	int* p=&a;//让p记录a的地址
	change(p);
	printf("%d\n",a);//确确实实被change了
	return 0;
}
