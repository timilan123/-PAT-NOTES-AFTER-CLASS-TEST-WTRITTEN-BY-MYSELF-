//这里的循环条件我们选用从数组第一个有效数走到最后一个数，下标每一次循环增加一次，当碰到数组里面的'\0'就停止
//因为数组不是装满的所以肯定存在很多'\0'
//如果我们用for(i=0;i<10;i++)来进行全部遍历，计算结果会出错
//*出错的原因未知 
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
