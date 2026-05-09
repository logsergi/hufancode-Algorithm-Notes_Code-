//6.5.4queue常用函数实例解析--pop()元素出队
#include<stdio.h>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	if(q.empty()==true){
		printf("Empty\n");//TODO
	}else{
		printf("Not Empty\n");
	}
	q.push(1);
	if(q.empty()==true){
		printf("Empty\n");//TODO
	}else{
		printf("Not Empty\n");
	}
	return 0;
}
