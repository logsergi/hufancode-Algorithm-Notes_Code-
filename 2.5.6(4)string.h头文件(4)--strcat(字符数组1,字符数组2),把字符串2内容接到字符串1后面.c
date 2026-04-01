//2.5.6(4)string.h头文件(4)--strcat(字符数组1,字符数组2),把字符串2内容接到字符串1后面
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50],str2[50];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	puts(str1);
	return 0;
}
