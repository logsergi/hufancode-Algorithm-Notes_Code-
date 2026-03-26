//2.2.2(3)printf函数的使用
#include <stdio.h>
int main(){
	float f1=8765.4,f2=8765.4;
	double d1=8765.4,d2=8765.4;//double型更精确
	printf("%f\n%f\n",f1*f2,d1*d2);
	return 0;
}
