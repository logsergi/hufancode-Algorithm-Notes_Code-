//5.4.2(4)素数筛法的完整版--100以内的所有素数
#include<stdio.h>
#include<stdbool.h>
const int maxn=101;
int prime[maxn],pNum=0;
bool p[maxn]={0};
void Find_Prime(){
	for(int i=2;i<maxn;i++){
		if(p[i]==false){
			prime[pNum++]=i;
			for(int j=i+1;j<maxn;j+=i){
				p[j]=true;//TODO
			}//TODO
		}//TODO
	}
}
int main(){
	Find_Prime();
	for(int i=0;i<pNum;i++){
		printf("%d ",prime[i]);//TODO
	}
	return 0;
}
