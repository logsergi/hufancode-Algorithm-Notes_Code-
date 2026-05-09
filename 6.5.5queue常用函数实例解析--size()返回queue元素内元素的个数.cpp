//6.5.5queue常用函数实例解析--size()返回queue元素内元素的个数
#include<stdio.h>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i);//
	}
	printf("%d\n",q.size());
	
	return 0;
}
