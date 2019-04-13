#include<stdio.h>
int main() {
	double a, b, c,i;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a > b) {
		i = a; a = b; b = i;
}
	if (a > c) {
		i = a; a = c; c = i;
	}
	if (b > c) {
		i = b; b = c; c = i;
	}
	printf("%.2f %.2f %.2f\n", a, b, c);
	return 0;
}                                              