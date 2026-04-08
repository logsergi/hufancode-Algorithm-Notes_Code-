//3.6(2)字符串处理-说反话
#include<cstdio>
int main(){
	int num=0;
	char ans[90][90];
	while(scanf("%s",ans[num])!=EOF){
		num++;//TODO
	}
	for(int i=num-1;i>=0;i--){
		printf("%s",ans[i]);
		if(i>0){
			printf(" ");//TODO
		}//TODO
	}
	return 0;
}
