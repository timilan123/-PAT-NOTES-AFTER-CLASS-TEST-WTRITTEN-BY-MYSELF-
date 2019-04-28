#include<stdio.h>
int main(){
	int N,read,count=0;
	while(scanf("%d",&N)){
		if(N==0)
		break;
		for(int i=0;i<N;i++){
			scanf("%d",&read);
			count+=read;
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}
