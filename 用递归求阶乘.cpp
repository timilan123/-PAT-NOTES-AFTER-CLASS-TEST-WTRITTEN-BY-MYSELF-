#include<iostream>
using namespace std;

int jc(int n) {
	if(n==0) return 1;//因为0！=1，所以把边界设置为0，当n变成0的时候停止递归
	else 	 return n=n*jc(n-1);//上面注释里的边界的n指的是函数参数里面的n不是左边式子里面的n，里面的式子的n-1只代表了计算方法
}

int main() {
	int a;
	cout<<"请输入要计算阶乘的数字:\n";
	cin>>a;
	cout<<"该数字的阶乘为\n"<<jc(a)<<'\n';
	return 0;
}
