//2.10.2(4)多点测试(3)while...break第二款
#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a||b){//有一个不为0就继续循环
		printf("%d\n",a+b);//TODO
	}
	return 0;
}
