#include<stdio.h>
int main() {
	int N = 0,all=0;
	while (all <= 1000) {
		N += 1;
		all += N;
}
	printf("%d", N);
	return 0;
}