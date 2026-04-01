//2.5.5(3)字符数组的输入输出(1)--scanf和printf
#include<stdio.h>
int main(){
	char str[10];
	scanf("%s",str);//遇到空格识别为结尾，而这个空格遗留在缓冲区
	printf("%s",str);
	return 0;
}
