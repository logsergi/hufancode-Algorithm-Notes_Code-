//2.10.6(1)除了顺序正常输出，若每组空行
#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF){
		printf("%d\n",a+b);
		printf("\n");//TODO
	}
	return 0;
}
