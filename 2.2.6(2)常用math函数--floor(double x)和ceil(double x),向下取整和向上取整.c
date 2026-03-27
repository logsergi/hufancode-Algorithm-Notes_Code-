//2.2.6(2)常用math函数--floor(double x)和ceil(double x),向下取整和向上取整
#include<stdio.h>
#include<math.h>//加入math头文件
int main(){
	double db1=-5.2,db2=5.2;
	printf("%.0f %.0f\n",floor(db1),ceil(db1));
	printf("%.0f %.0f\n",floor(db2),ceil(db2));
	return 0;
}
