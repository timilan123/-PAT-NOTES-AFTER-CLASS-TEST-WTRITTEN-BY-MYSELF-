#include<stdio.h>
int main() {
	int m=0,N,i=0;
	scanf("%d", &N);
	for (i = 1; i <= N + 10; i++) {
		m += i;
		if (i == 100) break;
	}
	printf("%d", m);
	return 0;
}
