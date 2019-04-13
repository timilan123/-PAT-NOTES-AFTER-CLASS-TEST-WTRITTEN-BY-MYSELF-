#include<stdio.h>
int main() {
	for (int i = 1; i <= 4; ++i) {
		for (int j = 1; j <= 5; ++j) {       //做这种题目的时候最好在草稿纸上面写出行列的标志，像语文标记段落一样，然后再根据行列找出规律，这里的规律是每个数等于行列数的乘积
			printf("%3d", i * j);
		}
		printf("\n");
}
	return 0;
}
