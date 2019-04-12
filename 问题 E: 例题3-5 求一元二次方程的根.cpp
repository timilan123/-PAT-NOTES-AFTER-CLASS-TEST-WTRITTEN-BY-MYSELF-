#include<stdio.h>
#include<math.h>
int main() {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	double r1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	double r2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	printf("%7.2f\n%7.2f\n", r1,r2);                //7代表输出的数字包括小数包括标点符号占7位，.2代表小数保留2位
	return 0;
}                                              
