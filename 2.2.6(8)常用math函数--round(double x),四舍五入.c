//2.2.6(8)常用math函数--round(double x),四舍五入,返回类型为double
#include <stdio.h>
#include <math.h>
int main(){
	double db1=round(3.40);
	double db2=round(3.45);
	double db3=round(3.50);
	double db4=round(3.55);
	double db5=round(3.60);
	printf("%d, %d, %d, %d, %d\n",(int)db1,(int)db2,(int)db3,(int)db4,(int)db5);
	return 0;
}
