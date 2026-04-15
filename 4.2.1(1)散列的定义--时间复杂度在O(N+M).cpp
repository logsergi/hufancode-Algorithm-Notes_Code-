//4.2.1(1)散列的定义--时间复杂度在O(N+M)
#include <cstdio>
const int maxn=100010;
bool hashTable[maxn]={false};
int main(){
	int n,m,x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		hashTable[x]=true;//TODO
	}
	for(int i=0;i<m;i++){
		scanf("%d",&x);
		if(hashTable[x]==true){
			printf("YES\n");//TODO
		}//TODO
		else{
			printf("NO\n");
		}
	}
	return 0;
}
