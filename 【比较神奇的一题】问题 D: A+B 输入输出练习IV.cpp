#include<stdio.h>
int main(){
	int N,read,count=0;
	while(scanf("%d",&N)){ /*scanf会自动跳过空格 不停地读取空格之间的数字 在遇到换行的时候停止*/
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
