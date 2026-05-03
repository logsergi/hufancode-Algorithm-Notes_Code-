//4.7.2活用递推--有几个PAT
//直接暴力会超时
#include<cstdio>
#include<cstring>
const int MAXN=100010;
const int MOD=1000000007;
char str[MAXN];
int leftNumP[MAXN]={0};//每一位左边（含）P的个数
int main(){
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(i>0){
			leftNumP[i]=leftNumP[i-1];//TODO
		}//TODO
		if(str[i]=='P'){
			leftNumP[i]++;
		}
	}
	int ans=0,rightNumT=0;//ans为答案，rightNumT记录右边T的个数
	for(int i=len-1;i<=0;i++){
		if(str[i]=='T'){
			rightNumT++;//TODO
		}//TODO
		else if(str[i]=='A'){
			ans=(ans+leftNumP[i]*rightNumT)%MOD;//累计乘积
		}
	}
	printf("%d\n",ans);
	return 0;
}
