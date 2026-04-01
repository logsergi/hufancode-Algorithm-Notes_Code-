//2.5.7(2)sscanf与sprintf(2)--重点讲sprintf
//sscanf是说把str里的东西以整数形式写到n里，那这个就是倒过来
#include<stdio.h>
int main(){
	int n=233;
	char str[100];
	sprintf(str,"%d",n);
	printf("%s\n",str);
	return 0;
}
