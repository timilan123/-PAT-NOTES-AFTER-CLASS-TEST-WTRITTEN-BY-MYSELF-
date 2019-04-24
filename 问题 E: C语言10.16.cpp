#include<stdio.h>

void minimum(int a[]) {			//用来求最小值
	int min=*a;						//min变量里面保存了最小值
	int x;									//x里面存储了最小值的下标
	int temp;							//temp用来交换数值
	for (int i = 0; i <= 9; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}

	for (int k = 0; k <= 9; k++) {
		if (a[k] == min) {
			x = k;
		}
	}
	temp = a[0];
	a[0] = a[x];
	a[x] = temp;
	//printf("最小值是 %d\n", min);
	//printf("最小值的下标是 %d\n", x);
	//printf("输出数组元素为\n");
	
}

void maximum(int a[]) {			//用来求最大值
	int max = *a;						//min变量里面保存了最大值
	int x;									//x里面存储了最小值的下标
	int temp;							//temp用来交换数值
	for (int i = 0; i <= 9; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	for (int k = 0; k <= 9; k++) {
		if (a[k] == max) {
			x = k;
		}
	}
	temp = a[9];
	a[9] = a[x];
	a[x] = temp;
	//printf("最大值是 %d\n", min);
	//printf("最大值的下标是 %d\n", x);
	//printf("输出数组元素为\n");

}

int main() {
	int a[10];
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
	minimum(a);
	maximum(a);
	for (int i = 0; i <= 9; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
