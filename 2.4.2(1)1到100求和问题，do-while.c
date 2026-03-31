//2.4.2(1)1到100求和问题，do-while
#include <stdio.h>
int main(){
	int n=1,sum=0;
	do{
		sum+=n;
		n++;
	}while(n<=100);
	printf("sum=%d\n",sum);
	return 0;//do-while能至少执行一次
}
