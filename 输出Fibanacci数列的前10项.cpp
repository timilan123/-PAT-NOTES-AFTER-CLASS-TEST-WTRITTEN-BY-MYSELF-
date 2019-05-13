#include<iostream>
using namespace std;

int fa(int n) {
	if(n<=2) return 1;//当n=1或者2的时候返回1
	else return fa(n-1)+fa(n-2);
}
int main() {
	
	for(int i=1; i<=10; i++) {//输出Fibanacci数列的前10项
		cout<<fa(i)<<' ';
	}

	return 0;
}
