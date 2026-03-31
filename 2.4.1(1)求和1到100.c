//2.4.1(1)求和1到100
#include<stdio.h>
int main(){
	int n=1,sum=0;
	while(n<=100){//!=0和==0对应原型和!(原型)仍然适用
	sum=sum+n;
	n++;	//TODO
	}
	printf("sum=%d\n",sum);
	return 0;
}
