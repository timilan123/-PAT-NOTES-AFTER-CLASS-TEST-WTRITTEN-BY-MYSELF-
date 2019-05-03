#include<stdio.h>
int main() {
	int n;
	while(scanf("%d",&n)!=EOF) {
	int num[220];
	int x;
	int special=0;
	for(int i=0; i<n; i++) {
		scanf("%d",&num[i]);
	}
	scanf("%d",&x);
	for(int i=0; i<n; i++) {
		if(num[i]==x) {
			printf("%d",i);
			special++;
		}
	}
	if(special==0)
	printf("-1");
	printf("\n");
	}
	return 0;
}

