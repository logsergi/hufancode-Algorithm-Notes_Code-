//2.6.1(5)传的参数不止一个应该用逗号隔开
#include<stdio.h>
int MAX(int a,int b,int c){
	int M;
	if(a>=b&&a>=c){
	M=a;	//TODO
	}
	else if(b>=a&&b>=c)M=b;
	else M=c;
	return M;
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d\n",MAX(a,b,c));
	return 0;
}
