#include<stdio.h>
int main() {
	int m = 0;
	for (int i = 1; i <= 100;++i)    //这里要用<=100，和while中的101不一样，while里面是到101停止，for这里是执行到100，但是要注意语句结束之后i 的值会变成101
	{
		m += i;
	}
	printf("%d", m);
	return 0;
}
