//2.10.6(2)最后一组后面没空行
#include<stdio.h>
int main(){
	int T,n,a;
	scanf("%d",&T);
	while(T--){
		int sum=0;//每轮循环都重置计数器，若数组重置则使用memset或者fill
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			sum+=a;//TODO
		}
		printf("%d\n",sum);
		if(T>0){
			printf("\n");//TODO
		}
	}
	return 0;
}
