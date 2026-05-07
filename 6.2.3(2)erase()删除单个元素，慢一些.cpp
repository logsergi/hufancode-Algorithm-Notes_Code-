//6.2.3(2)erase()删除单个元素，慢一些
#include<stdio.h>
#include<set>
using namespace std;
int main(){
	set<int>st;
	st.insert(100);
	st.insert(200);
	st.erase(100);//O(logN)
	for(set<int>::iterator it=st.begin();it!=st.end();it++){
		printf("%d\n",*it);//TODO
	}
	return 0;
}
