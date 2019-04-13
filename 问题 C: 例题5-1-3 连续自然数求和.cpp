#include<stdio.h>
int main() {
	int m = 0;
	for (int i = 1; i <= 100;++i)    //这里要用<=100，和while中的101不一样，while里面是到101停止，for这里是执行到100，但是要注意语句结束之后i 的值会变成101
	{
		m += i;       //有个特别的地方就是如果在for的括号里面定义了int i，在后面printf是找不到i的，因为此时i只会存在于for的里面，for 结束之后i就失效不见了
	}                     //如果在前面定义了int i，在for里面只写了i，在mian函数的后面就可以输出i 的值为101，这个时候i的生命就被延续了下来
	printf("%d", m);
	return 0;
}
