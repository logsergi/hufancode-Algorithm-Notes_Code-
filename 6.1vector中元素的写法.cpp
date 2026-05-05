//6.1vector中元素的写法
#include <stdio.h>
#include <vector>
using namespace std;
int main(){
	vector<int>vi;
	for(int i=1;i<=5;i++){
		vi.push_back(i);//TODO
	}
	for(vector<int>::iterator it=vi.begin();it!=vi.end();it++){
		printf("%d",*it);//TODO
	}
	return 0;
}
