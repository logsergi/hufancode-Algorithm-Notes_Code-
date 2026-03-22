//2.1.5(6)条件运算符（三目运算符）与宏定义结合
#include <stdio.h>
#define MAX(a,b) ((a)>(b)?(a):(b))
int main(){
	int a=4,b=3;
	printf("%d\n",MAX(a,b));
	return 0;
}
