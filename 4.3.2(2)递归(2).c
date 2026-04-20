//4.3.2(2)µÝ¹é(2)
#include<stdio.h>
int F(int n){//ÒªËØ£ºµÝ¹é±ß½çºÍµÝ¹éÊ½
	if(n==0||n==1){
		return 1;//TODO
	}
	else return F(n-1)+F(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",F(n));
	return 0;
}
