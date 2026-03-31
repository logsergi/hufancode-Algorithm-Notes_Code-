//2.4.3(2)for循环(c++版本)
#include<stdio.h>
int main(){
	int i,sum=0;
	for(int i=1;i<=100;i++){//可以在这里局部定义
	sum+=i;	//TODO
	}
	printf("sum=%d\n",sum);
	return 0;
}
