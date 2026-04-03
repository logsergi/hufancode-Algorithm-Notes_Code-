//2.7.1获得变量的地址
#include<stdio.h>
int main(){
	int a=1;
	printf("%d,%d\n",&a,a);//指针是一个unsigned类型的整数
	return 0;
}
