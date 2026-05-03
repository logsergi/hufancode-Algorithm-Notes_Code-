//4.7.3(2)随机选择算法,如何从一个无序数组中求出第K大的数
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;
const int maxn=100010;
int A[maxn],n;
int randPartition(int A[],int left,int right){
	int p=(round(1.0*rand()/RAND_MAX*(right-left)+left));
	swap(A[p],A[left]);
	int temp=A[left];
	while(left<right){
		while(left<right&&A[right]>temp){
			right--;//TODO
		}//TODO
		A[left]=A[right];
		while(left<right&&A[left]<=temp){
			left++;//TODO
		}
		A[right]=A[left];
	}
	A[left]=temp;
	return left;
}

void randSelect(int A[],int left,int right,int K){
	if(left==right){
		return;//TODO
	}
	int p=randPartition(A,left,right);
	int M=p-left+1;
	if(K==M){
		return;//TODO
	}
	if(K<M){
		randSelect(A,left,p-1,K);//TODO
	}
	else{
		randSelect(A,p+1,right,K-M);
	}
}

int main(){
	srand((unsigned)time(NULL));
	int sum=0,sum1=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&A[i]);
		sum+=A[i];//TODO
	}
	randSelect(A,0,n-1,n/2);
	for(int i=0;i<n/2;i++){
		sum1+=A[i];//TODO
	}
	printf("%d\n",(sum-sum1)-sum1);
	return 0;
	
}
