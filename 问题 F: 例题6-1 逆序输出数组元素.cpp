//直接从数组末尾开始循环输出数组元素即可
//也可以用冒泡排序把数组重新排列一下 
#include<stdio.h>
int main(void){
	int a[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	for(int i=9;i>=0;i--){
		printf("%d\n",a[i]);
	}
	return 0;
}
