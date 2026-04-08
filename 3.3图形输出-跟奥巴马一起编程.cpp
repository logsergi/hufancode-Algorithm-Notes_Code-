//3.3图形输出-跟奥巴马一起编程
#include<cstdio>
int main(){
	int row,col;//行列
	char c;
	scanf("%d %c",&col,&c);
	if(col%2==1){
		row=col/2+1;//TODO
	}
	else row=col/2;
	for(int i=0;i<col;i++){
		printf("%c",c);//TODO
	}
	printf("\n");
	
	for(int i=2;i<row;i++){
		printf("%c",c);
		for(int j=0;j<col-2;j++){
			printf(" ");//TODO
		}//TODO
		printf("%c\n",c);
	}
	for(int i=0;i<col;i++){
		printf("%c",c);//TODO
	}
	return 0;
}
