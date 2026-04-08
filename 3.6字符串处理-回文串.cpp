//3.6字符串处理-回文串
#include<cstdio>
#include<cstring>
const int maxn=256;
bool judge(char str[]){
	int len=strlen(str);
	for(int i=0;i<len/2;i++){
		if(str[i]!=str[len-1-i]){
			return false;//TODO
		}//TODO
	}
	return true;
}
int main(){
	char str[maxn];
	while(gets(str)){
		bool flag=judge(str);
		if(flag==true){
			printf("YES\n");//TODO
		}//TODO
		else{
			printf("NO\n");
		}
	}
	return 0;
}
