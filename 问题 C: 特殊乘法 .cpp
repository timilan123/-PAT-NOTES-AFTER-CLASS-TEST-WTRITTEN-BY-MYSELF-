#include<stdio.h>
#include<string.h>
int main(){
	char a[12],b[12];
	while(scanf("%s %s",a,b)!=EOF){
	int all=0;
	int length_a=strlen(a),length_b=strlen(b);
	for(int i=0;i<length_a;i++){
		for(int j=0;j<length_b;j++){
			all += (a[i]-'0')*(b[j]-'0');
		}
	}
	printf("%d\n",all);
	}

	return 0;
} 
