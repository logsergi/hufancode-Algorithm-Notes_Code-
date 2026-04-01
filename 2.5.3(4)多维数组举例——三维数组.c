//2.5.3(4)多维数组举例——三维数组
#include<stdio.h>
int main(){
	int a[3][3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
			scanf("%d",&a[i][j][k]);
			a[i][j][k]++;	//TODO
			}//TODO
		}//TODO
	}
	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
				printf("%d ",a[i][j][k]);	//TODO
				}//TODO
				printf("\n");
			}//TODO
		}
		return 0;
}
