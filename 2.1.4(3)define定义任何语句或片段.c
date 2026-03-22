//2.1.4(3)define定义任何语句或片段
#define ADD(a,b) ((a)+(b))//原封不动代换，所以能加括号的地方都要加上，很傻
#include<stdio.h>
int main(){
	int num1=3,num2=5;
	printf("%d",ADD(num1,num2));//直接变量代换都可以
	return 0;
}
