//2.4.1(2)每一位的数字求和，省略写条件
#include <stdio.h>
int main(){
	int n=12345,count=0;
	while(n){
	count=count+n%10;
	n=n/10;	//TODO
	}
	printf("%d\n",count);
	return 0;
}
