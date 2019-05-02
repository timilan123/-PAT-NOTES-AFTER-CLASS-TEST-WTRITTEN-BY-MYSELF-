#include<stdio.h>
int main(){
int T;
long long A,B,C;//long long 注意了 
scanf("%d",&T);
	for(int i=1;i<=T;i++){
		scanf("%lld %lld %lld",&A,&B,&C); //int的范围是-2^31 ~ 2^31-1，题目给的超了一丢丢、。。、，结果要用long long 
		if(A+B>C)
		printf("Case #%d: true\n",i);
		else
		printf("Case #%d: false\n",i);
		}
	return 0;
}

