#include<stdio.h>

struct student {
	int id;
	char name[100],gender[10],age[10];
} message[21];

int main() {
	int m;//样例数
	scanf("%d",&m);
	int n;
	int find;
	while(m--) {
		scanf("%d",&n);
		for(int i=0; i<n; i++) {
			scanf("%d %s %s %s",&message[i].id ,&message[i].name ,&message[i].gender ,&message[i].age );
		}
		scanf("%d",&find);
		for(int i=0; i<n; i++) {
			if(find==message[i].id) {
				printf("%d %s %s %s\n",message[i].id ,message[i].name ,message[i].gender ,message[i].age );
				break;
			}
		}
	}
	return 0;
}
