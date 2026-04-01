//2.5.6(2)string.h头文件(2)--strcmp(字符数组1,字符数组2),按照字典序列比较字符串大小
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	int cmp=strcmp(str1,str2);
	if(cmp<0){
		printf("str1<str2\n");//TODO
	}
	else if(cmp>0){
		printf("str1>str2\n");
		
	}
	else printf("str1==str2\n");
	return 0;
}
