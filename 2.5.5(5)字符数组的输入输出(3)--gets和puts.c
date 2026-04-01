//2.5.5(5)字符数组的输入输出(3)--gets和puts
#include<stdio.h>
int main(){
	char str1[20];
	char str2[5][10];
	gets(str1);
	for(int i=0;i<3;i++){
		gets(str2[i]);//TODO
	}
	puts(str1);
	for(int i=0;i<3;i++){
		puts(str2[i]);//TODO
	}
	return 0;
}
