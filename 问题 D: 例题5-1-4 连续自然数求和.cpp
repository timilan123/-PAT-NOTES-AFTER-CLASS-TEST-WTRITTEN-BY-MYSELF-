#include<stdio.h>
int main() {
	int m=0,N,i=0;
	scanf("%d", &N);
	for (i = 1; i <= N + 10; i++) {   //这道题和书上的例题很像，把N的上限随意加一点，中间用当加到100的时候BREAK就行，注意IF BREAK的位置，不要写在前面的那个赋值语句地前面了
		m += i;
		if (i == 100) break;
	}
	printf("%d", m);
	return 0;
}
