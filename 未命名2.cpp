//ֱ�Ӵ�����ĩβ��ʼѭ���������Ԫ�ؼ���
//Ҳ������ð�������������������һ�� 
#include<stdio.h>
int main(void){
	int a[10];
	scanf("%d %d %d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	for(int i=9;i>=0;i--){
		printf("%d\n",a[i]);
	}
	return 0;
}
