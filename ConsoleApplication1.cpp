#include<stdio.h>
int main() {
	int a[10];
	int temp;
	int v, b;
	/*输入10个数字*/
	/*利用多个%d和&，在%d之间加入空格，就可以实现在一行内以空格输入10个数字*/
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	/*接下来开始冒泡排序*/
	for (v = 0; v < 9; v++) {
		for (b = 0; b < 9 - v; b++) {
			/*if (a[b] < a[b + 1]) {*/
			/*上面的为冒泡排序的语句，解除注释后该程序就变成了从大到小排序数组*/
				temp = a[b];
				a[b] = a[b + 1];
				a[b + 1] = temp;
			}
		}
	
	/*接下来开始输入数组*/
	for (int d = 0; d < 10; d++)
		printf("%d\n", a[d]);
	return 0;
}