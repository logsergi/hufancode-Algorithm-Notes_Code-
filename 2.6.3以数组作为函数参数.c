//2.6.3以数组作为函数参数
//由于数组是地址的形式，所以对它的更改直接就生效了
#include<stdio.h>

void change(int a[],int b[][5]){//二维数组要写第二位
	a[0]=1;
	a[1]=3;
	a[2]=5;
	b[0][0]=1;
}

int main(){
	int a[3]={0};
	int b[5][5]={0};
	change(a,b);
	for(int i=0;i<3;i++){
		printf("%d\n",a[i]);//TODO
	}
	return 0;
}
