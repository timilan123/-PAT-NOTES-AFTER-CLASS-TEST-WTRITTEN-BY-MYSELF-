//�����ѭ����������ѡ�ô������һ����Ч���ߵ����һ�������±�ÿһ��ѭ������һ�Σ����������������'\0'��ֹͣ
//��Ϊ���鲻��װ�������Կ϶����ںܶ�'\0'
//���������for(i=0;i<10;i++)������ȫ�������������������
//*�����ԭ��δ֪ 
#include<stdio.h>
int main(void){
	int i=0;
	char a[10];
	char b[10];
	int num=0;
	
	gets(a);
	gets(b);
	
	while(a[i]!='\0'&&b[i]!='\0'){
	
		if(a[i]>b[i])
		num=num+(a[i]-b[i]);
		
		else if(a[i]<b[i])
		num=num+(a[i]-b[i]);
		
		else if(a[i]=b[i])
		num=num;
		
		++i;
	}
	printf("%d",num);
	
	return 0;
}
