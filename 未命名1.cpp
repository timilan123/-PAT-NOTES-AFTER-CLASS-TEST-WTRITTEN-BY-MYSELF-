#include<stdio.h>
int main(void){
	
	int a[19]={1,1};
	for(int i=2;i<=19;i++){
		a[i]=a[i-1]+a[i-2];
		
	}
	for(int i=0;i<=19;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
