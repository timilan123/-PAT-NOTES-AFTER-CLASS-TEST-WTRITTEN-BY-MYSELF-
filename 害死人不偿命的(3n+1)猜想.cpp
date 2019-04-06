#include<stdio.h>
int  main() {
	int n, i = 0;                             //注意了，像这样的要统计计算次数的代码，i初始的时候都为0.
	scanf("%d", &n);
	printf("%d\n ", n);
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
	printf("%d", i);
	return 0;
}
