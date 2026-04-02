//2.6.5函数的递归调用--阶乘
#include<stdio.h>
int Func(int n){
	if(n==0)return 1;
	else return n*Func(n-1);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",Func(n));
	return 0;
}
