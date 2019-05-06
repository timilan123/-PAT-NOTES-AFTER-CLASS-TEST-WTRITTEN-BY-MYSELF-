#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	//共2n-1行
	//接下来是测试
	for(int i=1; i<=n; i++) {
		//接下来输出空格

		for(int j=1; j<=i-1; j++) {
			printf(" ");
		}
		for(int k=1; k<=n-i+1; k++) {
			printf("*");
			printf(" ");
		}
		printf("\n");
	}

	for(int i=1; i<=n-1; i++) {
		//接下来输出空格

		for(int j=1; j<=n-i-1; j++) {
			printf(" ");
		}
		for(int k=1; k<=i+1; k++) {
			printf("*");
			printf(" ");
		}
		printf("\n");
	}




	return 0;
}
