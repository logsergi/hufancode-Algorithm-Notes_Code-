//6.3.1(1)string通过下标访问
#include <stdio.h>
#include<string>
using namespace std;
int main(){
	string str="abcd";
	for(int i=0;i<str.length();i++){
		printf("%c",str[i]);//TODO
	}
	return 0;
}
