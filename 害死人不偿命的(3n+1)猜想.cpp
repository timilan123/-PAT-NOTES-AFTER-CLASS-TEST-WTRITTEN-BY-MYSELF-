#include<stdio.h>
int  main() {
	int n, i = 0;
	scanf("%d", &n);
	printf("\n\n\n你输入的数字是%d\n ", n);
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			++i;
		}									//如果n是偶数
		else if (n % 2 == 1) {
			n = (3 * n + 1) / 2;
			++i;
		}									//如果n是奇数
	}
	printf("\n\n\n需要执行的次数是%d", i);
	return 0;
}
