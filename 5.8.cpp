#include<stdio.h>
#include<string.h>

int turndec(char a) { //a����ת��Ϊ10���Ƶĺ���
	if(a>='0'&&a<='9') //ע��������ַ����Ų�Ҫ©����
		return a-'0';
	else if(a>='A'&&a<='F')
		return a-'A'+10;
	else if(a>='a'&&a<='f')
		return a-'a'+10;
}

char turnother(int a) { //��10����ת��Ϊb���Ƶ���
	if(a>=10&&a<=16)   ////ע��������ַ����Ų�Ҫ©����
		return 'A'+a-10;
	else if(a>=0&&a<=9)
		return '0'+a;
}

int main() { //������2��4��8��10��16
	int a,b;
	char n[100];//���������
	while(scanf("%d %s %d",&a,n,&b)!=EOF) {
//		if(b==0) { //���a����bΪ0ֱ����� ��������ѭ�� ������һ��ѭ�� 
//			printf("0\n");
//			continue;
//		}
		int newnum=0,cishu=1;
		for(int i=strlen(n)-1; i>=0; i--) {
			newnum+=turndec(n[i])*cishu;
			cishu*=a;
		}
		char shuchu[100];
		int k=-1;
		do {
			shuchu[++k]=turnother(newnum%b);
			newnum/=b;
		} while(newnum!=0);

		for(int i=k; i>=0; i--) {
			printf("%c",shuchu[i]);
		}

		printf("\n");
	}
	return 0;
}
