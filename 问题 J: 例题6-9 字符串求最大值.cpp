//这个题目就是让我们熟悉strcmp和strcpy和gets和puts的使用 
#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	char b[10];
	char c[10];
	char max[10];
	gets(a);
	gets(b);
	gets(c);
	
	if(strcmp(a,b)<0)
	strcpy(max,b);
	else if(strcmp(a,b)>=0)
	strcpy(max,a);
	
	if(strcmp(max,c)<0)
	strcpy(max,c);
	else if(strcmp(max,c)>=0)     //这句其实可以省略不写，因为其实它本身也是不执行东西的，但是为了代码的易读性还是写了进去 
	strcpy(max,max);
	
	puts(max);
	return 0;
}
