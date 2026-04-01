//2.5.3(3)较大的数组需要定义在主函数之外
#include<stdio.h>
int a[1000000];
int main(){
	for(int i=0;i<1000000;i++){
	a[i]=i;	//TODO
	}
	return 0;
}
