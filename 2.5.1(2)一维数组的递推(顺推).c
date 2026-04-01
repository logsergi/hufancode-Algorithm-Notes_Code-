//2.5.1(2)一维数组的递推(顺推)
#include<stdio.h>
int main(){
	int a[10];
	scanf("%d",&a[0]);
	for(int i=1;i<10;i++){
	a[i]=a[i-1]*2;	//TODO
	}
	for(int i=0;i<10;i++){
	printf("a[%d]=%d\n",i,a[i]);	//逐个打印
	}
	return 0;
}
