//4.6.3(3)生成[0,1]与[3,7]范围内的随机数
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand((unsigned)time(NULL));
	for(int i=0;i<10;i++){
		printf("%d ",rand()%2);//TODO
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",rand()%5+3);//TODO
	}
	return 0;
}
