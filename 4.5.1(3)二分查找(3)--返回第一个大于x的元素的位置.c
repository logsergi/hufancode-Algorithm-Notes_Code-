//4.5.1(3)二分查找(3)--返回第一个大于x的元素的位置
#include<stdio.h>
int upper_bound(int A[],int left,int right,int x){
	int mid;
	while(left<right){
		mid=(left+right)/2;
		if(A[mid]>x){//中间的数大于x
			right=mid;//TODO
		}//TODO
		else{
			left=mid+1;
		}
	}
	return left;
}
int main(){
	#define n 10
	int A[n]={1,3,4,6,7,8,10,11,12,15};
	printf("%d %d\n",upper_bound(A,0,n-1,6),upper_bound(A,0,n-1,9));
	return 0;
}
