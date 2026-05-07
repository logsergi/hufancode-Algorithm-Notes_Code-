//6.3.3(5)string常用函数--erase删除单个元素
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="abcdefg";
	str.erase(str.begin()+4);
	cout<<str<<endl;
	return 0;
}
