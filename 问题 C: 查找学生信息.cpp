#include<stdio.h>
#include<string.h>
int main() {
	int N;
	int M;

	struct student {
		char id[5];
		char name[100];
		char gender[5];
		char age[5];
	} data[1010];

	while(scanf("%d",&N)!=EOF) {
		for(int i=0; i<N; i++) {
			scanf("%s %s %s %s",&data[i].id,&data[i].name,&data[i].gender,&data[i].age);
		}
		scanf("%d",&M);
		while(M--) {
			int panduan=0;
			char find[5];
			scanf("%s",find);
			for(int i=0; i<N; i++) {
				if(strcmp(find,data[i].id)==0) {
					printf("%s %s %s %s\n",data[i].id,data[i].name,data[i].gender,data[i].age);
					panduan=1;
				}
			}
			if(panduan==0)
				printf("No Answer!\n");
		}
	}
	return 0;
}
