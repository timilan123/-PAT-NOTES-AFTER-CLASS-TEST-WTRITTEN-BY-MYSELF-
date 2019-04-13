#include<stdio.h>
int main() {
	int i = 1, m = 0;
	do {
		m += i;
		i++;
	} while (i != 101);
	printf("%d", m);
	return 0;
}