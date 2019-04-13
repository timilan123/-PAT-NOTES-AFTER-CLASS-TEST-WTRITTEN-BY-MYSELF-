#include<stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);             /*把a、b、c逐个与另外两个数进行对比即可,这里会用到“且”的符号"&&"*/
	if (a > b && a > c)
		printf("%d", a);
	else if (b > a && b > c)
		printf("%d", b);
	else if (c > a && c > b)
		printf("%d", c);
	return 0;
}                                              
