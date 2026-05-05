//6.1.6(2)erase()--Çø¼äÔªËØ
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	vector<int>vi;
	for(int i=5;i<=9;i++){
		vi.push_back(i);//TODO
	}
vi.erase(vi.begin()+1,vi.begin()+4);
for(int i=0;i<vi.size();i++){
	printf("%d ",vi[i]);//TODO
}
	return 0;
}
