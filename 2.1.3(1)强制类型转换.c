//2.1.3(1)强制类型转换
#include<stdio.h>
int main(){
	double r=12.56;
	int a=3,b=5;
	printf("%d\n",(int)r);
	printf("%d\n",a/b);
	printf("%.1f",(double)a/(double)b);
	return 0;
}
