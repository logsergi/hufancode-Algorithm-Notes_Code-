//3.6(2)字符串处理-说反话-第二版
#include<cstdio>
#include<cstring>
int main(){
	char str[90];
	gets(str);
	int len=strlen(str),r=0,h=0;
	char ans[90][90];
	for(int i=0;i<len;i++){
		if(str[i]!=' '){
			ans[r][h++]=str[i];//TODO
		}//TODO
		else{
			ans[r][h]='\0';
			r++;
			h=0;
		}
	}
	for(int i=r;i>=0;i--){
		printf("%s",ans[i]);
		if(i>0){
			printf(" ");//TODO
		}//TODO
	}
	return 0;
}
