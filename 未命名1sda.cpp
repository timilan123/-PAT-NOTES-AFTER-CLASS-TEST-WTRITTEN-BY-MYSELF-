#include<stdio.h>

struct {
    int num;
    char name[10];
    char sex;
    char job;
    union {
        int classs;
        char position[10];
    }category;
}a[100]; //�ṹ������100���˵���Ϣ 

int main(){
	int n;         
	scanf("%d",&n); //����Ҫ��¼������ 
	for(int i=0;i<n;i++){
		scanf("%d %s %c %c",&a[i].num ,&a[i].name ,&a[i].sex,&a[i].job); //ע�������%�����Ҫһһ��Ӧ���ַ����ַ����ַ������ַ��� 
		if(a[i].job =='t')
		scanf("%s",&a[i].category.position );
		else if(a[i].job =='s')
		scanf("%d",&a[i].category.classs  );
	} 
	for(int i=0;i<n;i++){
		printf("%d %s %c %c",a[i].num ,a[i].name ,a[i].sex,a[i].job);
		if(a[i].job =='t')
		printf("%s\n",a[i].category.position );
		else if(a[i].job =='s')
		printf("%d\n",a[i].category.classs  );
		
	} 
	return 0;
} 
