//2.5.6(1)string.h头文件(1)--strlen(字符数组),求长度
#include<stdio.h>
#include<string.h>
int main(){
	char str[10];
	gets(str);
	int len=strlen(str);
	printf("%d\n",len);
	return 0;
}
