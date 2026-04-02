//2.6.1(3)全局变量
#include<stdio.h>
int x;//放在最前，大家共用这个x,所以底下也不需要传参数
void change(){
	x=x+1;
}
int main(){
	x=10;
	change();
	printf("%d\n",x);
	return 0;
}
