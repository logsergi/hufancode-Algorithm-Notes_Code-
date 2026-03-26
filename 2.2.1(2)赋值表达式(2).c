//2.2.1(2)赋值表达式(2)
#include<stdio.h>
int main(){
	int n=12,m=3;
	n/=m+1;
	m%=2;
	printf("%d %d\n",n,m);
	return 0;
}
