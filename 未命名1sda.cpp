
#include<iostream>
using namespace std;

struct score{     //�ṹ�� 
	int ID;
	char name[10];
	int Maths;
	int English;
	int Chinese;
}student[5];

void input(struct score student[]){  //�����õĺ��� 
	for(int i=0;i<5;i++){
//		scanf("%d %s %d %d %d",&student[i].ID ,student[i].name ,&student[i].Maths ,&student[i].English ,&student[i].Chinese );
	cin>>student[i].ID>>student[i].name>>student[i].Maths>>student[i].English>>student[i].Chinese;	
	}
}

print(struct score student[]){  //����õĺ��� 
		for(int i=0;i<5;i++){
		cout<<student[i].ID<<' '<<student[i].name<<' '<<student[i].Maths<<' '<<student[i].English<<' '<<student[i].Chinese;	
		printf("\n");
//		printf("%d %s %d %d %d",student[i].ID ,student[i].name ,student[i].Maths ,student[i].English ,student[i].Chinese );
	}

}

int main(){  //������ 
	input(student);
	print(student);
	return 0;
}
