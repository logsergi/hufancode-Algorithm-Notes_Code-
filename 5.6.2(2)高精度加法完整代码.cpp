//5.6.2(2)高精度加法完整代码
#include<stdio.h>
#include<string.h>
struct bign{
	int d[1000];
	int len;
	bign(){
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[]){
	bign a;

	a.len=strlen(str);
	for(int i=0;i<a.len;i++){
		a.d[i]=str[a.len-i-1]-'0';//TODO
	}
	return a;
}
bign add(bign a,bign b){
	bign c;
	int carry=0;
	for(int i=0;i<a.len||i<b.len;i++){
		int temp=a.d[i]+b.d[i]+carry;
		c.d[c.len++]=temp%10;
		carry=temp/10;//TODO
	}
	if(carry!=0){
		c.d[c.len++]=carry;//TODO
	}
	return c;
}
void print(bign a){
	for(int i=a.len-1;i>=0;i--){
		printf("%d",a.d[i]);//TODO
	}
}
int main(){
	char str1[1000],str2[1000];
	scanf("%s%s",str1,str2);
	bign a=change(str1);
	bign b=change(str2);
	print(add(a,b));
	return 0;
}
