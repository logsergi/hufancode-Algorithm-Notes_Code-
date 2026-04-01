//2.5.3(1)二维数组定义
#include <stdio.h>
int main(){
	int a[5][6]={
		{3,1,2},
		{8,4},
		{},
		{1,2,3,4,5}
	};
	for(int i=0;i<5;i++){
	for(int j=0;j<6;j++){
	printf("%d ",a[i][j]);	//TODO
	}	//TODO
	printf("\n");
	}
	return 0;
}
