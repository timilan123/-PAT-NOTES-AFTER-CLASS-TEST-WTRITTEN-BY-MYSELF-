#include<stdio.h>
#include<algorithm>
using namespace std; //这句话千万别忘记了 不然sort函数会失效
int main() {
	int n,a[150];
	while(scanf("%d",&n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		for(int i=0; i<n; i++) {
			printf("%d ",a[i]);
		}
		printf("\n");
	}

	return 0;
}
