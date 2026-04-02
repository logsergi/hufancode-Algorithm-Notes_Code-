//2.6.4函数的嵌套调用
#include<stdio.h>

int max_2(int a,int b){
	if(a>b){
	return a;	//TODO
	}
	else return b;
}

int max_3(int a,int b,int c){//两个值最大的再跟c比，从而挑选出三者最大值
	int temp=max_2(a,b);
	temp=max_2(temp,c);
	return temp;
}

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",max_3(a,b,c));
	return 0;
}
