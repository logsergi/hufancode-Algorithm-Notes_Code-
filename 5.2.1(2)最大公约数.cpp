//5.2.1(2)最大公约数
#include<cstdio>
int gcd(int a,int b){
	if(b==0){
		return a;
	
	}
		else return gcd(b,a%b);//TODO
}
int main(){
	int m,n;
	while(scanf("%d%d",&m,&n)!=EOF){
		printf("%d\n",gcd(m,n));//TODO
	}
	return 0;
}
