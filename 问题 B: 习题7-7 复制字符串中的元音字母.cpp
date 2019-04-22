//这题很简单，就是switch case和函数与数组的使用
#include<stdio.h>
 void vowels(char s1[], char s2[]){
	int k=0;
	for(int i=0;i<=99;i++){
		switch(s1[i]){
		case 'a':s2[k]=s1[i];++k;break;
		case 'e':s2[k]=s1[i];++k;break;
		case 'i':s2[k]=s1[i];++k;break;
		case 'o':s2[k]=s1[i];++k;break;
		case 'u':s2[k]=s1[i];++k;break;
		case 'A':s2[k]=s1[i];++k;break;
		case 'E':s2[k]=s1[i];++k;break;
		case 'I':s2[k]=s1[i];++k;break;
		case 'O':s2[k]=s1[i];++k;break;
		case 'U':s2[k]=s1[i];++k;break;	
		}
		
	}
	
	puts(s2);
	
};

int main(){
char s1[100];
char s2[100];
gets(s1);	
vowels(s1,s2);
	return 0;
}
