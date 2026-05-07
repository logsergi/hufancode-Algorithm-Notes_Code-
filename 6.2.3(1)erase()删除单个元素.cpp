//6.2.3(1)erase()É¾³ıµ¥¸öÔªËØ
#include<stdio.h>
#include<set>
using namespace std;
int main(){
	set<int>st;
	st.insert(100);
	st.insert(200);
	st.insert(300);
	st.erase(st.find(100));
	st.erase(st.find(200));//O£¨1£©
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		printf("%d\n",*it);//TODO
	}
	return 0;
}
