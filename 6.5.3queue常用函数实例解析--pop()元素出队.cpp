//6.5.3queue常用函数实例解析--pop()元素出队
#include<stdio.h>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	for(int i=1;i<=5;i++){
		q.push(i);//TODO
	}
	for(int i=1;i<=3;i++){
		q.pop();//TODO
	}
	printf("%d\n",q.front());
	return 0;
}
