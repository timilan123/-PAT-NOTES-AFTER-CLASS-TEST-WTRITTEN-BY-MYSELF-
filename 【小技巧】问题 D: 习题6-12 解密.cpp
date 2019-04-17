//利用ascii表，字符的深层含义就是ascii表里面的一个数字
//A-B是65-90
//a-z是97-122
//利用互补公式来计算相对于的字符
//对于0-9则忽略 
#include<stdio.h>
int main(void){
	char a[50];
	gets(a);
	for(int i=1-1;i<=50-1;i++){
		if(a[i]<=90&&a[i]>=65)
		a[i]=155-a[i];
		else if(a[i]<=122&&a[i]>=97)
		a[i]=219-a[i];
	}
	puts(a);
	return 0;
}
