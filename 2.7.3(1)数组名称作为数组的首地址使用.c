//2.7.3(1)数组名称作为数组的首地址使用
#include<stdio.h>
int main(){
	int a[10]={1};
	int* p=a;//数组本身就是地址了，不用加&，p记录了首元素的地址
	printf("%d\n",*p);//打印数组的首元素
	return 0;
}
