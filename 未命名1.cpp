//��strlen()�õ�����\0ǰ���ַ��ĳ��ȣ�����������ٸ��ַ��ó��������־��Ƕ���Ŷ 
#include<stdio.h>
#include<string.h>
char a[10];
char b[10];

char fuction(char a[]){

	int j = strlen(a)-1;
	for(int i = j;i>=0;i--){
		b[j-i]=a[i];
	}
    printf("%s\n",b);  //������printfҲ�ǿ��Եģ�����Ҫע��Ҫд%s����д%c,��Ϊ%cֻ��������������ַ� 
    //puts(b);
}

int main(){

	gets(a);
	fuction(a);
	return 0;
}
