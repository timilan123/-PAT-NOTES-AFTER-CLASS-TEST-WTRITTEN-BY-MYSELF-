#include<stdio.h>
int main() {
	int a[10];//定义一个数组a[10]
	int temp;//定义一个临时变量，用于充当冒泡排序交换数字时候的中间值
	//printf("请输入从小到大的9个数字：\n");
	for (int i = 1; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	/*printf("请输入需要插入的数字 \n");*/
	scanf("%d", &a[0]);
	/*接下来开始使用冒泡排序*/
	for (int rep = 0; rep < 9; ++rep) {
		/*冒泡排序排9轮*/
		for (int mid =0 ;mid<9-rep; ++mid) {
			/*冒泡排序的基本排序步骤*/
			if (a[mid] > a[mid + 1]) {   
				/*如果这里用的是小于号，那么整个数组就会从左至右降序排列*/
				temp = a[mid];
				a[mid] = a[mid + 1];
				a[mid + 1] = temp;
			}
		}
	}

	//接下来进行数组输出
	for (int k = 0; k < 10; ++k) {
		printf("%d\n", a[k]);
	}
	return 0;
}