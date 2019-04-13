#include<stdio.h>
int main() {
	int i = 1, m = 0;
	do {
		m += i;
		i++;
	} while (i != 101);          //注意这里的while语句结束之后要用分号。并且是写101不是写100因为101表示执行到101就终止，如果写到100就会执行到100就终止
	printf("%d", m);
	return 0;
}
