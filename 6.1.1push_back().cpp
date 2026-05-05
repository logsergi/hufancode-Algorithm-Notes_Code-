//6.1.1push_back()
#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	vector<int>vi;
	for(int i=1;i<=3;i++){
		vi.push_back(i);//TODO
	}
	for(int i=0;i<vi.size();i++){
		printf("%d ",vi[i]);//TODO
	}
	return 0;
}
