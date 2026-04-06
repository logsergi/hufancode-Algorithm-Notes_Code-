//2.10.2(3)多点测试(2)while...break第一款
#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0)break;
		printf("%d\n",a+b);//TODO
	}
	return 0;
}
