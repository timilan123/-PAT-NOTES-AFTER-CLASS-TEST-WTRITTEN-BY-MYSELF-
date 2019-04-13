#include<stdio.h>                      /*这题比较简单所以不虚*/
int main() {
	double a, b;
	scanf("%lf%lf",&a,&b);
	if (a < b)
		printf("%.2f %.2f\n", a, b);
	else if(b<a)
		printf("%.2f %.2f\n", b, a);
	return 0;
}                                              
