//6.5.2queue容器内元素的访问
#include<stdio.h>
#include <queue>
using namespace std;
int main(){
	queue<int>q;
	for(int i=1;i<=5;i++){
		q.push(i);//TODO
	}
	printf("%d %d\n",q.front(),q.back());
	return 0;
}
