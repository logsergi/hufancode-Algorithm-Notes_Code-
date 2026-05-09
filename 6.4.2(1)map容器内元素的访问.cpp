//6.4.2(1)map容器内元素的访问
#include<stdio.h>
#include<map>
using namespace std;
int main(){
	map<char,int>mp;
	mp['c']=20;
	mp['c']=30;
	printf("%d\n",mp['c']);
	return 0;
}
