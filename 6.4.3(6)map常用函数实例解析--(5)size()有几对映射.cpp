//6.4.3(6)map常用函数实例解析--(5)size()有几对映射
#include<stdio.h>
#include<map>
using namespace std;
int main(){
	map<char,int>mp;
	mp['a']=1;
	mp['b']=2;
mp.clear();
	printf("%d\n",mp.size());
	return 0;
}
