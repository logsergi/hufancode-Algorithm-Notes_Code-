//6.4.2(2)map通过迭代器访问
#include<stdio.h>
#include<map>
using namespace std;
int main(){
	map<char,int>mp;
	mp['m']=20;
	mp['r']=30;
	mp['a']=40;
	for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
		printf("%c %d\n",it->first,it->second);//TODO
	}
	return 0;
}
