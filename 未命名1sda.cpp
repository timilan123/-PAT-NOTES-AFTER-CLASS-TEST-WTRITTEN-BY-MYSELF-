//本题代码量有点大，一定要注意变量不要写错！！ 
#include<stdio.h>
/*定义结构体，里面存着每个学生的信息*/
struct score{
	int id;
	char name[19];
	int english;
	int maths;
	int chinese;
}student[10];


int main(){
/*读取10个学生的信息*/
	for(int i=0;i<10;i++){
	scanf("%d %s %d %d %d",&student[i].id ,&student[i].name ,&student[i].english ,&student[i].maths ,&student[i].chinese );	
	}
/*计算三门课程的所有人的成绩之和*/	
int ave1=0,ave2=0,ave3=0;
double avej,avek,avel;
for(int i=0;i<10;i++){
	ave1=ave1+student[i].english ;
	ave2=ave2+student[i].maths ;
	ave3=ave3+student[i].chinese ;
}

/*计算三门课程的所有人的平均成绩*/
avej=((double)ave1)/10.0;
avek=((double)ave2)/10.0;
avel=((double)ave3)/10.0;
/*输出三门课程的所有人的平均成绩*/
printf("%.2f %.2f %.2f\n",avej,avek,avel);

/*用COMPARE找到平均分最高的学生*/
int compare=student[0].chinese +student[0].english +student[0].maths ;
for(int i=0;i<10;i++)
{
	if(compare<(student[i].chinese +student[i].english +student[i].maths))
	compare=(student[i].chinese +student[i].english +student[i].maths);
}
/*用x找到平均分最高的学生的下标*/
int x;
 for(int i=0;i<10;i++)
{
	if(compare==(student[i].chinese +student[i].english +student[i].maths)){
		x=i;
		break;	
	}	
}
/*输出均分最高学生的所有信息*/
printf("%d %s %d %d %d\n",student[x].id ,student[x].name ,student[x].english ,student[x].maths ,student[x].chinese );	
	return 0;
}
