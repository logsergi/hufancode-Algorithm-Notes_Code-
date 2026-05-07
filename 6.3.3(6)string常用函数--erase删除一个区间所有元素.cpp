//6.3.3(6)string常用函数--erase删除一个区间所有元素
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str="abcdefg";
	str.erase(str.begin()+2,str.end()-1);
	cout<<str<<endl;
	return 0;
}
