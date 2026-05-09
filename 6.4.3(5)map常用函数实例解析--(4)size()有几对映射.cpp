//6.4.3(5)map常用函数实例解析--(4)size()有几对映射
#include<stdio.h>
#include<map>
using namespace std;
int main(){
	map<char,int>mp;
	mp['a']=1;
	mp['b']=2;
	mp['c']=3;
	printf("%d\n",mp.size());
	return 0;
}
