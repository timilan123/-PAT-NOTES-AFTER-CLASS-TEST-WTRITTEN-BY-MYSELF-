#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	//��2n-1��
	//�������ǲ���
	for(int i=1; i<=n; i++) {
		//����������ո�

		for(int j=1; j<=i-1; j++) {
			printf(" ");
		}
		for(int k=1; k<=n-i+1; k++) {
			printf("*");
			printf(" ");
		}
		printf("\n");
	}

	for(int i=1; i<=n-1; i++) {
		//����������ո�

		for(int j=1; j<=n-i-1; j++) {
			printf(" ");
		}
		for(int k=1; k<=i+1; k++) {
			printf("*");
			printf(" ");
		}
		printf("\n");
	}




	return 0;
}
