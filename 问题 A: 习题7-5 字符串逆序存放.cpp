//用strlen()得到的是\0前的字符的长度，所以输入多少个字符得出来的数字就是多少哦 
#include<stdio.h>
#include<string.h>
char a[10];
char b[10];

char fuction(char a[]){

	int j = strlen(a)-1;
	for(int i = j;i>=0;i--){
		b[j-i]=a[i];
	}
    printf("%s\n",b);  //这里用printf也是可以的，但是要注意要写%s不能写%c,因为%c只能用来输出单个字符 
    //puts(b);
}

int main(){

	gets(a);
	fuction(a);
	return 0;
}
