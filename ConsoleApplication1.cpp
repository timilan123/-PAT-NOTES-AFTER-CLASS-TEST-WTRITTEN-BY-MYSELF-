#include<stdio.h>
int main() {
	double i;
	scanf("%lf", &i);
	if (i <= 100000)
		printf("%.2f", i * 0.1);
	else if (i > 100000 && i <= 200000)
		printf("%.2f", 100000 * 0.1 + (i - 100000) * 0.075);
	else if (i > 200000 && i <= 400000)
		printf("%.2f", 200000 * 0.1 + (i - 200000) * 0.05);
	else if (i > 400000 && i <= 600000)
		printf("%.2f", 400000 * 0.1 + (i - 400000) * 0.03);
	else if (i > 600000 && i <= 1000000)
		printf("%.2f", 600000 * 0.1 + (i - 600000) * 0.015);
	else if (i > 1000000)
		printf("%.2f", 1000000 * 0.1 + (i - 1000000) * 0.01);
	return 0;
}