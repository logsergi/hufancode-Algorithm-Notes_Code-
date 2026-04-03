//2.7.3(4)指针的减法，代表地址差几个
#include <stdio.h>
int main(){
	int a[10]={1,4,9,16,25,36,49};
	int* p=a;
	int* q=&a[5];
	printf("q=%d\n",q);
	printf("p=%d\n",p);//打印两个指针的地址
	printf("q-p=%d\n",q-p);//两个指针指向的地址之间的差(差几个int)
	return 0;
}
