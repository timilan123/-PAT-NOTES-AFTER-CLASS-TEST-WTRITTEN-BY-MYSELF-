#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	char a[12],b[12];
	int num1,num2;
	
	while(scanf("%s %d %s %d",a,&num1,b,&num2)!=EOF) {

	int ten1=0,ten2=0;
	int total1=0,total2=0;

		for(int i=0; i<strlen(a); i++) {
			if((a[i]-'0')==num1) {
				total1=num1*pow(10,ten1)+total1;
				ten1++;
			}
		}

		for(int i=0; i<strlen(b); i++) {
			if((b[i]-'0')==num2) {
				total2=num2*pow(10,ten2)+total2;
				ten2++;
			}
		}
		printf("%d\n",total1+total2);
		//printf("%d %d",total1,total2);
	}

	return 0;
}


