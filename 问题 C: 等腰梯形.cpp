#include<stdio.h>
int main() {
	int h,m;
	scanf("%d",&m);
	while(m--) {
		scanf("%d",&h);//有h行

		for(int i=1; i<=h; i++) {//共h行，行数从上到下从1开始算 
			for(int j=1; j<=h-i; j++) { //每行前面有h-i个空格 
				printf(" ");
			}
			for(int j=1; j<=h+(i-1)*2; j++) {//每行中间有h+(行数-1)*2个星号 
				printf("*");
			}
			for(int k=1; k<=h-i; k++) {//同样每行后面有h-i个空格  
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}


