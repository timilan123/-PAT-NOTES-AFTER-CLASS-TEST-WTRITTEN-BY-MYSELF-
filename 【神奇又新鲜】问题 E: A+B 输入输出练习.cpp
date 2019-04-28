#include<stdio.h>
int main(){
int N,M,input,count=0;
scanf("%d",&N);
for(int i=0;i<N;i++){
	scanf("%d",&M);
	for(int i=0;i<M;i++){
		scanf("%d",&input);
		count+=input;
	}
	printf("%d\n",count);
		count=0;
	}
	return 0;
}
