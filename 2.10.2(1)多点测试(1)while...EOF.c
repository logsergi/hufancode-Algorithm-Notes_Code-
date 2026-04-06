//2.10.2(1)多点测试(1)while...EOF
#include <stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){//以ctrl+z结束
		printf("%d\n",a+b);//TODO
	}
	return 0;
}
