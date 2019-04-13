#include<stdio.h>
#include<math.h>
int main( ) {
	int sign = 1;
	double PI = 0.0, n = 1, term = 1.0;      //分母可以不用加小数点
	while (fabs(term) >= 0.000001) {                 
		PI = PI + term;
		n = n + 2;
		sign = -sign;                     //少用pow()这样的函数，多使用加减乘数这样的简单符号
		term = sign / n;
	}
	PI = PI * 4;
	printf("PI=%10.8f\n", PI);
	return 0;
}
