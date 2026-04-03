//2.7.2(1)指针不要混淆！！
#include<stdio.h>
int main(){
	int a;
	int* p=&a;//*号属于类型名的一部分,实际上是指针p被赋予a的地址
	a=233;
	printf("%d\n",*p);//*像一把钥匙让我们可以看到指针p指向的地址当中的值
	return 0;
}
