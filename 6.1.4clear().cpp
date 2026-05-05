//6.1.4clear()
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	vector<int> vi;
	for(int i=1;i<=3;i++){
		vi.push_back(i);//TODO
	}
	vi.clear();
	printf("%d\n",vi.size());
	return 0;
}
