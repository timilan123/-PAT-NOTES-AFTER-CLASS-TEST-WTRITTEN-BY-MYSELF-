#include<stdio.h>
int main() {
	int i=1,m=0;
	while (i != 101) {
		m+=i;
		++i;
}
	printf("%d", m);
	return 0;
}