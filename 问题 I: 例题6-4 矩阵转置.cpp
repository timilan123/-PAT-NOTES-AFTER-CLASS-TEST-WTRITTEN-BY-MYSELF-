//这题很简单，就是两个下标交换位置 
#include<stdio.h>
int main(){
	int a[2][3];
	int b[3][2];
	scanf("%d %d %d",&a[0][0],&a[0][1],&a[0][2]); //第1行 ：第1、2、3个数 
	scanf("%d %d %d",&a[1][0],&a[1][1],&a[1][2]); //第2行 ：第1、2、3个数 
	for(int i=0;i<=2;i++){
		for(int j=0;j<=1;j++){
			b[i][j]=a[j][i];
		}
	}
	for(int i=0;i<=2;i++){
		for(int j=0;j<=1;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
