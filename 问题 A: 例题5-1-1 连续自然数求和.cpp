#include<stdio.h>
int main() {
	int i=1,m=0;
	while (i != 101) {    //while的意思是到该条件就停止，如果写的到100，那么加100那个步骤就会省略，这里需要注意一下
		m+=i;
		++i;
}
	printf("%d", m);
	return 0;
}
