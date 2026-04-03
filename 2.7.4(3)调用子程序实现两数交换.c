//2.7.4(3)调用子程序实现两数交换
#include<stdio.h>
void swap(int* a,int* b){//传入两个指针，他就会传回去，应对void或者要返回两个值的情况
	int temp=*a;
	*a=*b;//里面的值拿来赋值，如果不加星号会导致地址赋值地址，这样主程序没法收到元素的变化
	*b=temp;
}
int main(){
	int a=1,b=2;
	int* p1=&a,*p2=&b;//不论是哪个指针，请务必记住初始化！！！！！
	swap(p1,p2);//p1,p2接收了地址，和上面传的是地址相对应
	printf("a=%d,b=%d\n",*p1,*p2);
	return 0;
}
