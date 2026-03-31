//2.4.4(2)continue语句
#include<stdio.h>
int main(){
	int sum=0;
	for(int i=0;i<=5;i++){
	if(i%2==1){
	continue;//跳过，进入下一轮循环
		//TODO
	}	//TODO
	sum+=i;
	}
	printf("sum=%d\n",sum);
		return 0;
}
