//3.2ВщевдЊЫи
#include<cstdio>
const int maxn=210;
int a[maxn];
int main(){
	int n,x;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);//TODO
		}//TODO
		scanf("%d",&x);
		int k;
		for(k=0;k<n;k++){
			if(a[k]==x){
				printf("%d\n",k);
				break;//TODO
			}//TODO
		}
		if(k==n){
			printf("-1\n");//TODO
		}
	}
	return 0;
}
