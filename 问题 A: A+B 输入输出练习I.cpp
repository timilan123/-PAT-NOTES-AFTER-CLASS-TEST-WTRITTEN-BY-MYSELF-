#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){ //关键句
		printf("%d\n",a+b);
	}
	return 0;
}
