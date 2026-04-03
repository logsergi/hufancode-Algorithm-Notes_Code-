//2.7.5(1)c++实现函数功能，但只是取别名不生成副本
#include<stdio.h>
void change(int&x){//有改动加&
	x=1;
}
int main(){
	int x=10;
	change(x);
	printf("%d\n",x);
	return 0;
}
