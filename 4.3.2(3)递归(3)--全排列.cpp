//4.3.2(3)µİ¹é(3)--È«ÅÅÁĞ
#include<cstdio>
const int maxn=11;
int n,P[maxn],hashTable[maxn]={false};
void generateP(int index){
	if(index==n+1){
		for(int i=1;i<=n;i++){
			printf("%d",P[i]);//TODO
		}//TODO
		printf("\n");
		return;
	}
	for(int x=1;x<=n;x++){
		if(hashTable[x]==false){
			P[index]=x;
			hashTable[x]=true;
			generateP(index+1);
			hashTable[x]=false;//TODO
		}//TODO
	}
}
int main(){
	n=3;
	generateP(1);
	return 0;
}
