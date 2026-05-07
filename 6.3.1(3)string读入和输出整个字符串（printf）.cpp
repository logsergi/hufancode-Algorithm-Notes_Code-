//6.3.1(3)string读入和输出整个字符串（printf）
#include<iostream>
#include<string>
using namespace std;
int main(){
string str="abcd";
printf("%s\n",str.c_str());//变成字符数组
return 0;
}
