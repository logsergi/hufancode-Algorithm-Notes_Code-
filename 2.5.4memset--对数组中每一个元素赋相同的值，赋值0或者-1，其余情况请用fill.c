//2.5.4memset--对数组中每一个元素赋相同的值，赋值0或者-1，其余情况请用fill
//memset(数组名，值，sizeof(数组名))
#include <stdio.h>
#include<string.h>
int main(){
	int a[5]={1,2,3,4,5};
	memset(a,0,sizeof(a));
	for(int i=0;i<5;i++){
	printf("%d ",a[i]);	//TODO
	}
	printf("\n");
	memset(a,-1,sizeof(a));
	for(int i=0;i<5;i++){
	printf("%d ",a[i]);	//TODO
	}
	printf("\n");
	return 0;
}
