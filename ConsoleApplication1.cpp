#include<stdio.h>
int main() {
	double a = 1.0, b = 2.0,num,all=2.0;
		for (int i = 3; i <= 21; ++i) {
			
			num = a + b; 
			all = all + (num / b);
			a = b;
			b = num;
		}
		printf("%.6f\n", all);
	
	return 0;
}