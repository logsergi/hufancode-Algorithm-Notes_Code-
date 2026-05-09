//6.4.3(2)map常用函数实例解析--(1)erase()删除单个元素,mp.erase(it)
#include<stdio.h>
#include<map>
using namespace std;
int main(){
	map<char,int>mp;
	mp['a']=1;
	mp['b']=2;
	mp['c']=3;
	map<char,int>::iterator it=mp.find('b');
mp.erase(it);
for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
	printf("%c %d\n",it->first,it->second);//TODO
}
	return 0;
}
