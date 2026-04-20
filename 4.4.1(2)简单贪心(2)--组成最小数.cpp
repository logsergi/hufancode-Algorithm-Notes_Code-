//4.4.1(2)简单贪心(2)--组成最小数
#include<cstdio>
int main(){
	int count[10];
	for(int i=0;i<10;i++){
		scanf("%d",&count[i]);//TODO
	}
	for(int i=1;i<10;i++){
		if(count[i]>0){
			printf("%d",i);
			count[i]--;
			break;//找到一个就中断
		}//TODO
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<count[i];j++){
			printf("%d",i);//TODO
		}//TODO
	}
	return 0;
}
