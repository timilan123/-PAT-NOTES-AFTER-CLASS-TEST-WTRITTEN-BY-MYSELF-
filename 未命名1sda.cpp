//����������е��һ��Ҫע�������Ҫд���� 
#include<stdio.h>
/*����ṹ�壬�������ÿ��ѧ������Ϣ*/
struct score{
	int id;
	char name[19];
	int english;
	int maths;
	int chinese;
}student[10];


int main(){
/*��ȡ10��ѧ������Ϣ*/
	for(int i=0;i<10;i++){
	scanf("%d %s %d %d %d",&student[i].id ,&student[i].name ,&student[i].english ,&student[i].maths ,&student[i].chinese );	
	}
/*�������ſγ̵������˵ĳɼ�֮��*/	
int ave1=0,ave2=0,ave3=0;
double avej,avek,avel;
for(int i=0;i<10;i++){
	ave1=ave1+student[i].english ;
	ave2=ave2+student[i].maths ;
	ave3=ave3+student[i].chinese ;
}

/*�������ſγ̵������˵�ƽ���ɼ�*/
avej=((double)ave1)/10.0;
avek=((double)ave2)/10.0;
avel=((double)ave3)/10.0;
/*������ſγ̵������˵�ƽ���ɼ�*/
printf("%.2f %.2f %.2f\n",avej,avek,avel);

/*��COMPARE�ҵ�ƽ������ߵ�ѧ��*/
int compare=student[0].chinese +student[0].english +student[0].maths ;
for(int i=0;i<10;i++)
{
	if(compare<(student[i].chinese +student[i].english +student[i].maths))
	compare=(student[i].chinese +student[i].english +student[i].maths);
}
/*��x�ҵ�ƽ������ߵ�ѧ�����±�*/
int x;
 for(int i=0;i<10;i++)
{
	if(compare==(student[i].chinese +student[i].english +student[i].maths)){
		x=i;
		break;	
	}	
}
/*����������ѧ����������Ϣ*/
printf("%d %s %d %d %d\n",student[x].id ,student[x].name ,student[x].english ,student[x].maths ,student[x].chinese );	
	return 0;
}
