#include<stdio.h>
#include<string.h>

int turndec(char a) { //a进制转换为10进制的函数
	if(a>='0'&&a<='9') //注意这里的字符引号不要漏掉了
		return a-'0';
	else if(a>='A'&&a<='F')
		return a-'A'+10;
	else if(a>='a'&&a<='f')
		return a-'a'+10;
}

char turnother(int a) { //将10进制转换为b进制的数
	if(a>=10&&a<=16)   ////注意这里的字符引号不要漏掉了
		return 'A'+a-10;
	else if(a>=0&&a<=9)
		return '0'+a;
}

int main() { //进制有2、4、8、10、16
	int a,b;
	char n[100];//输入的数字
	while(scanf("%d %s %d",&a,n,&b)!=EOF) {
//		if(b==0) { //如果a或者b为0直接输出 跳过次轮循环 进入下一次循环 
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
