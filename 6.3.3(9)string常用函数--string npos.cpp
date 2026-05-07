//6.3.3(9)string³£ÓÃº¯Êý--string::npos
#include<iostream>
#include<string>
using namespace std;
int main(){
	if(string::npos==-1){
	cout<<"-1 is true."<<endl;	//TODO
	}
	if(string::npos==4294967295){
		cout<<"4294967295 is also true."<<endl;//TODO
	}
	return 0;
}
