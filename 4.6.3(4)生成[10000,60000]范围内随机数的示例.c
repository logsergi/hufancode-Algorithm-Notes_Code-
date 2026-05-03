//4.6.3(4)生成[10000,60000]范围内随机数的示例
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		printf("%d ", (int)(round(1.0*rand()/RAND_MAX*50000+10000)));//TODO
	}
	return 0;
}
