#include<cstdio>
using namespace std;

int main() {
	int N,M,x;
	while(scanf("%d %d",&N,&M)!=EOF) {
		int pengyou[10000]= {0};
		int duzhe[10000]={0};
		for(int i=1; i<=N; i++) {
			scanf("%d",&x);
			pengyou[x]++;
			duzhe[i-1]=x;//为了减少后面从头遍历数组浪费时间建立读者数组，对应他喜欢的书号 
		}
		for(int i=1; i<=N; i++) {
			if(pengyou[duzhe[i-1]]==1) {
				printf("BeiJu\n");
			} else if(pengyou[duzhe[i-1]]>1) {
				printf("%d\n",pengyou[duzhe[i-1]]-1);
			}
		}
	}
	return 0;
}
