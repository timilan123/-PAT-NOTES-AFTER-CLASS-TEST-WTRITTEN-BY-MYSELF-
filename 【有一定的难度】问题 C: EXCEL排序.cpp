#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

struct student {
	char ID[10]; //学号,用字符串保存，用整型变量没办法保存开头的数字 
	char name[10];//姓名 
	int score;//分数 
} info[100010];//学生信息结构体数组 

bool Case1(student a,student b) { //当 C=1 时，按学号递增排序
	return strcmp(a.ID ,b.ID)<0 ;
}

bool Case2(student a,student b) { //当 C=2时，按姓名的非递减字典序排序
	if(strcmp(a.name ,b.name )==0)//当若干学生具有相同姓名或者相同成绩时，则按他们的学号递增排序。
		return strcmp(a.ID ,b.ID)<0 ;//则按他们的学号递增排序。(注意"则"字)
	else
		return strcmp(a.name ,b.name )<0;
} 

bool Case3(student a,student b) { //当 C=3 时，按成绩的非递减排序
	if(a.score ==b.score )//当若干学生具有相同姓名或者相同成绩时
		return strcmp(a.ID ,b.ID)<0 ;//则按他们的学号递增排序。
	else
		return a.score<b.score ;
}

int main() {
	int N,C,bianhao=1;//bianhao编号用来存储Case后面的数字,case后面的数字不是C，不是C！！记住了！ 
	while(scanf("%d %d",&N,&C),N!=0) {//N等于0就停止 
		for(int i=0; i<N; i++) {
			scanf("%s %s %d",&info[i].ID ,&info[i].name ,&info[i].score);
		}
		if(C==1) {
			sort(info,info+N,Case1);
		}
		if(C==2) {
			sort(info,info+N,Case2);
		}
		if(C==3) {
			sort(info,info+N,Case3);
		}
		printf("Case %d:\n",bianhao++);//注意这里Case后面有个空格然后才打的冒号,而且是英文冒号 
		for(int i=0; i<N; i++) {
			printf("%s %s %d\n",info[i].ID ,info[i].name ,info[i].score);
		}
	}
	return 0;
}
