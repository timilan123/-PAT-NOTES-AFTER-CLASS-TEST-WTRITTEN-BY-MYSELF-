#include<stdio.h>
int main() {
	double a = 1.0, b = 2.0,num,all=2.0;
		for (int i = 3; i <= 21; ++i) {
			
			num = a + b; 
			all = all + (num / b);           //首先要输出一组数，每个数等于前面的两个数字之和，然后在草稿纸上算好重复几次就行
			a = b;
			b = num;
		}
		printf("%.6f\n", all);
	
	return 0;
}
