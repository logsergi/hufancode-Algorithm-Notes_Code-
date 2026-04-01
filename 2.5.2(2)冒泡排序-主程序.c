//2.5.2(2)冒泡排序-主程序
#include<stdio.h>
int main(){
	int a[10]={3,1,4,5,2};
	for(int i=1;i<=4;i++){//进行n-1趟,i这里做形式主语
	
	for(int j=0;j<5-i;j++){
		if(a[j]>a[j+1]){
	int temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;	//TODO
	}	//TODO
	}

}
for(int i=0;i<5;i++){
printf("%d ",a[i]);	//TODO
}
}
