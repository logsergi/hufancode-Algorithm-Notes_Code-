//2.5.7(1)sscanf与sprintf
/*
回顾：
①scanf("%d",&n);printf("%d",n);是一对输入输出
②还可以写成
scanf(screen,"%d",&n);
printf(screen,"&d",n);
把screen变量里的东西做输入输出
引入：
sscanf(str,"%d",&n);
sprintf(str,"%d",n);
把str数组里的内容做输入输出,并以整数形式,原来一般都是char型
*/
#include<stdio.h>
int main(){
	int n;
	char str[100]="123";
	sscanf(str,"%d",&n);
	printf("%d\n",n);
	return 0;
}
