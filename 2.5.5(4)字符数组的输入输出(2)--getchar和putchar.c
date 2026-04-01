//2.5.5(4)字符数组的输入输出(2)--getchar和putchar
#include<stdio.h>
int main(){
	char str[5][5];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			str[i][j]=getchar();//TODO
		}//TODO
		getchar();//吸收掉每行末尾的缓冲区空格
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			putchar(str[i][j]);//TODO
		}//TODO
		putchar('\n');
	}
	return 0;
}
