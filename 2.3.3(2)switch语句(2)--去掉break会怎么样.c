//2.3.3(2)switch语句(2)--去掉break会怎么样
#include<stdio.h>
int main(){
	int a=1,b=2;
	switch (a+b) {
		case 2:
			printf("%d\n",a);//TODO
			
		case 3:
			printf("%d\n",b);//TODO
			
		case 4:
			printf("%d\n",a+b);
			
		default:
			printf("sad story\n");//TODO
		
	}
	return 0;
}
