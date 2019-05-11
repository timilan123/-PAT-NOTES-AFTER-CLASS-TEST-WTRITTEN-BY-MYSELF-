#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;//别忘了写这一行

int main() {
	int N,num[1000];
	while(scanf("%d",&N)!=EOF) {
		for(int i=0; i<N; i++) {
			scanf("%d",&num[i]);
		}
		if(N==1) {
			printf("%d\n",num[0]);
			printf("-1\n");
		} else {
			sort(num,num+N);
			printf("%d\n",num[N-1]);
			num[N-1]='\0';
			for(int i=0; i<N-1; i++) {
				printf("%d",num[i]);
				if(i<N-2) printf(" ");//只在中间的数字加入空格
			}
			printf("\n");
		}
	}
	return  0;
}
