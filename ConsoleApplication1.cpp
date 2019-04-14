#include<stdio.h>
int main() {
	int a = 1, b = 1,num;
	int n;
	scanf("%d", &n);
	if (n <= 2)
		printf("1\n");
	if (n > 2) {
		for (int i = 3; i <= n; ++i) {
			num = a + b; 
			b = a;
			a = num;
		}
		printf("%d", num);
	}
	return 0;
}