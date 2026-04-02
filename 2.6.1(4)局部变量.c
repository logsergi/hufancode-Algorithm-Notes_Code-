//2.6.1(4)局部变量
#include<stdio.h>
void change(int x){
	x=x+1;
}
int main(){
	int x=10;
	change(x);//传了参并没有返回值
	printf("%d\n",x);
	return 0;
}
