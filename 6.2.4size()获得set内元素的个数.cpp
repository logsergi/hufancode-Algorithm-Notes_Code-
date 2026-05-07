//6.2.4size()获得set内元素的个数
#include<stdio.h>
#include<set>
using namespace std;
int main(){
	set<int> st;
	st.insert(2);
	st.insert(5);
	st.insert(4);
	printf("%d\n",st.size());
	return 0;
}
