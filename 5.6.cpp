#include<stdio.h>
int main() {
	int h,m;
	scanf("%d",&m);
	while(m--) {
		scanf("%d",&h);//��h��

		for(int i=1; i<=h; i++) {//��h�У��������ϵ��´�1��ʼ�� 
			for(int j=1; j<=h-i; j++) { //ÿ��ǰ����h-i���ո� 
				printf(" ");
			}
			for(int j=1; j<=h+(i-1)*2; j++) {//ÿ���м���h+(����-1)*2���Ǻ� 
				printf("*");
			}
			for(int k=1; k<=h-i; k++) {//ͬ��ÿ�к�����h-i���ո�  
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}


