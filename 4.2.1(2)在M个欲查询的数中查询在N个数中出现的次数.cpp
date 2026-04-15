//4.2.1(2)在M个欲查询的数中查询在N个数中出现的次数
//上一个基础上微调，把哈希表改成int型
#include<cstdio>
const int maxn=100010;
int hashTable[maxn]={0};
int main(){
	int n,m,x;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		hashTable[x]++;//TODO
	}
	for(int i=0;i<m;i++){
		scanf("%d",&x);
		printf("%d\n",hashTable[x]);//TODO
	}
	return 0;
}
