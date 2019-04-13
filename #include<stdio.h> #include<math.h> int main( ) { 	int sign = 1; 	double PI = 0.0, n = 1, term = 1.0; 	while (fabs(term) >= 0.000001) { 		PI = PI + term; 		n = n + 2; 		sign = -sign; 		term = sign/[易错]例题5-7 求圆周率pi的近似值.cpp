#include<stdio.h>
#include<math.h>
int main( ) {
	int sign = 1;
	double PI = 0.0, n = 1, term = 1.0;    //声明double变量的时候一定要加小数点,被除数n可以不加小数点
	while (fabs(term) >= 0.000001) {
		PI = PI + term;
		n = n + 2;                    //这里面记得用最简单的加减乘除号，如果使用了过多内置的公式如 pow()，就会产生误差，虽然很小但是题目还是会报错
		sign = -sign;
		term = sign / n;
	}
	PI = PI * 4;
	printf("PI=%10.8f\n", PI);
	return 0;
}
