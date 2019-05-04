#include<stdio.h>
int main() {
	int n;
	while(scanf("%d",&n)!=EOF) {
		int a[110],m,b[110];
		for(int i=1; i<=n; i++) {
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for(int k=1; k<=m; k++) {
			scanf("%d",&b[k]);
			int panduan=0;
			for(int j=1; j<=n; j++) {
				if(b[k]==a[j]) {
					panduan=1;
					printf("YES\n");
					break;
				}
			}
			if(panduan==0)
				printf("NO\n");
		}
	}
	return 0;
}
