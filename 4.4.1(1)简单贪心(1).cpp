//4.4.1(1)简单贪心(1)
#include<cstdio>
#include<algorithm>//可以方便调用sort函数
using namespace std;
struct mooncake{
	double store;//库存量
	double sell;//总售价
	double price;//单价
}cake[1010];//命名为cake并用一个数组存储
bool cmp(mooncake a, mooncake b){//返回单价高比单价低的情况
	return a.price>b.price;//a单价比b单价高则返回真
}
int main(){
	int n;//n种月饼
	double D;//总需求量
	scanf("%d%lf",&n,&D);
	for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].store);//TODO
	}
    for(int i=0;i<n;i++){
		scanf("%lf",&cake[i].sell);
		cake[i].price=cake[i].sell/cake[i].store;//计算单价
	}
	sort(cake,cake+n,cmp);
	double ans=0;//收益初始化为0
	for(int i=0;i<n;i++){
		if(cake[i].store<=D){//如果需求量高于月饼库存量
			D-=cake[i].store;//第i种月饼全部卖出，更新需求量
			ans+=cake[i].sell;//更新收益
		}//TODO
		else{//如果月饼库存量高于需求量
			ans+=cake[i].price*D;//只卖出剩余需求量的月饼
			break;
		}
	}	
	printf("%.2f\n",ans);//输出收益有多少
	return 0;
}
