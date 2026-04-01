//2.5.6(3)string.h头文件(3)--strcpy(字符数组1,字符数组2),把字符串2内容复制到字符串1
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	strcpy(str1,str2);
	puts(str1);
	return 0;
}
