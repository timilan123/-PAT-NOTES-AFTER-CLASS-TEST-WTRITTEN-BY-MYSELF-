//这题主要是考察cin和cout的使用，但是要注意要定义iostream和命名空间
//并且cout之间要加空格通过' '的方式添加
//****有一个问题就是用scanf和printf会导致错误，就是格式不知道哪里就是匹配不上
//****很苦恼
#include<stdio.h>
#include<malloc.h>
#include<iostream>
using namespace std;
struct student {
	int num;
	char name[20];
	char sex;
	int age;
}a[10];

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin>>a[i].num>>a[i].name>>a[i].sex>>a[i].age; 
	}
	for (int i = 0; i < n; i++) {
		cout << a[i].num <<' '<< a[i].name << ' ' << a[i].sex << ' ' << a[i].age;
		printf("\n");
	}
	return 0;
}