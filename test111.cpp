//�����Ŀ������������Ϥstrcmp��strcpy��gets��puts��ʹ�� 
#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	char b[10];
	char c[10];
	char max[10];
	gets(a);
	gets(b);
	gets(c);
	
	if(strcmp(a,b)<0)
	strcpy(max,b);
	else if(strcmp(a,b)>=0)
	strcpy(max,a);
	
	if(strcmp(max,c)<0)
	strcpy(max,c);
	else if(strcmp(max,c)>=0)     //�����ʵ����ʡ�Բ�д����Ϊ��ʵ������Ҳ�ǲ�ִ�ж����ģ�����Ϊ�˴�����׶��Ի���д�˽�ȥ 
	strcpy(max,max);
	
	puts(max);
	return 0;
}
