//这种题目最容易出错的点：
//1、定义数组的时候写错数组内的数字个数，容易把数组内的数字个数少些一位，因为想当然数组元素下标是从0-9开始的
//2、冒泡排序的执行次数为 数组个数-1
//3、注意冒泡排序内部的j和i不要敲错，把i和1搞混敲错了 
#include<stdio.h>
int main(void){
	int a[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	for(int i=1;i<=9;i++){
		for(int j=0;j<10-i;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int k=0;k<=9;k++){
		printf("%d\n",a[k]);
	}
	return 0;
}
