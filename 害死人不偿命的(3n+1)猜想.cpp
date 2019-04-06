#include<stdio.h>
int  main() {
	int n, i = 0;                             //注意了，像这样的要统计计算次数的代码，i初始的时候都为0.
	scanf("%d", &n);                          //注意记忆scanf和printf括号里面%和&的写法
	printf("%d\n ", n);
	while (n != 1) {                          //如果n是偶数（假如这里的括号里面只写了一个n，它代表的意思就是n!=0，即n不为NULL，或者说n存在）
		if (n % 2 == 0) {
			n = n / 2;
			++i;
		}									
		else if (n % 2 == 1) {            //如果n是奇数（注意这里是else if，新手不要漏掉else）
			n = (3 * n + 1) / 2;
			++i;
		}									
	}
	printf("%d", i);
	return 0;
}
