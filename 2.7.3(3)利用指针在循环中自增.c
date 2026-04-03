//2.7.3(3)利用指针在循环中自增
#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	for(int* p=a;p<a+10;p++){
	printf("%d ",*p);	//TODO
	}
	return 0;
}
