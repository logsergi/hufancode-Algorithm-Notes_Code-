//2.4.4(1)breakÓï¾ä
#include<stdio.h>
int main(){
	int i,sum=0;
	for(i=1;i<=100;i++){
	sum+=i;	//TODO
	if(sum>=2000){
	break;	//TODO
	}
	}
	printf("sum=%d\n",sum);
	return 0;
}
