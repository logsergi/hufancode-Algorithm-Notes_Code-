//6.3.2通过迭代器访问string
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	string str="abcd";
	for(string::iterator it=str.begin();it!=str.end();it++){
		printf("%c",*it);//TODO
	}
	return 0;
}
