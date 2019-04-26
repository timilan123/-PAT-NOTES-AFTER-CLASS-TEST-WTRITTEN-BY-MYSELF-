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
}a[100]; //结构体最多存100个人的信息 

int main(){
	int n;         
	scanf("%d",&n); //输入要记录的人数 
	for(int i=0;i<n;i++){
		scanf("%d %s %c %c",&a[i].num ,&a[i].name ,&a[i].sex,&a[i].job); //注意这里的%后面的要一一对应，字符对字符，字符串对字符串 
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
