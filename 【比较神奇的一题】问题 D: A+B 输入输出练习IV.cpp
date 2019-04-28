#include<stdio.h>
int main(){
	int N,read,count=0;
	while(scanf("%d",&N)){ /*由于while里面的for循环的作用，从第二数开始到最后的数字会一直被吸收进入计算*/
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
