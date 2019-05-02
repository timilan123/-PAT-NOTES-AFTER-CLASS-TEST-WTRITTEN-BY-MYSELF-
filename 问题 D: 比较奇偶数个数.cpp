#include<stdio.h>
int main(){
	int n;
	int num[1001];
	while(scanf("%d",&n)!=EOF){
		int oushu=0;             //计算偶数的个数 
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
			if(num[i]%2==0)
			oushu++;
		}
		if(oushu>(n-oushu))
		printf("NO\n");
		else
		printf("YES\n");
			
	}
	return 0;
}

