//2.7.3(2)a+i与a[i]等价
#include<stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++){
	scanf("%d",a+i);	//TODO
	}
	for(int i=0;i<10;i++){
	printf("%d ",*(a+i));	//括号要弄起来
	}
	return 0;
}
