#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
	int times=0;//��ȭ���� 
	int jia_wins=0;//��Ӯ���ܴ��� 
	int yi_wins=0;//��Ӯ���ܴ��� 
	int draws=0;//ƽ�Ĵ��� 
	char jia,yi;//��ȭ������ 
	int jia_C=0,jia_B=0,jia_J=0;//���ڲ�ͬ������Ӯ�Ĵ���
	int yi_C=0,yi_B=0,yi_J=0;//���ڲ�ͬ������Ӯ�Ĵ���
	char maxgesture_jia,maxgesture_yi;//�����׺���Ӯ���������� 
	
	scanf("%d",&times);
	while(times--){
		cin>>jia>>yi;
		if(jia=='C'){
			if(yi=='J'){
			jia_wins++;
			jia_C++;	
			}
			else if(yi=='B'){
			yi_wins++;
			yi_B++;	
			}
			else if(yi=='C')
			draws++;
		}
		else if(jia=='B'){
			if(yi=='J'){
			yi_wins++;
			yi_J++;
			}
			else if(yi=='B')
			draws++;
			else if(yi=='C'){
			jia_wins++;
			jia_B++;
			}
		}
		else if(jia=='J'){
			if(yi=='J')
			draws++;
			else if(yi=='B'){
			jia_wins++;
			jia_J++;	
			}
			else if(yi=='C'){
			yi_wins++;
			yi_C++;	
			}
			
		}
	}
	printf("%d %d %d\n",jia_wins,draws,yi_wins);
	printf("%d %d %d\n",yi_wins,draws,jia_wins);
	
	//���������бȽ�
	if(jia_C>jia_B) {
		
		if(jia_C>=jia_J)      //ע�������еȺţ���ΪC��J����ĸ��ǰ�棬��������������ѡ����ĸ����С�Ľ⣬��������������Ҳ��ͬ�� 
		maxgesture_jia='C';
		else if(jia_C<jia_J)
		maxgesture_jia='J';
	}
	else if(jia_C<=jia_B){
		
		if(jia_B>=jia_J)
		maxgesture_jia='B';
		else if(jia_B<jia_J)
		maxgesture_jia='J';
	}
	
	if(yi_C>yi_B) {
		
		if(yi_C>=yi_J)
		maxgesture_yi='C';
		else if(yi_C<yi_J)
		maxgesture_yi='J';
	}
	else if(yi_C<=yi_B){
		
		if(yi_B>=yi_J)
		maxgesture_yi='B';
		else if(yi_B<yi_J)
		maxgesture_yi='J';
	}
	
	printf("%c %c",maxgesture_jia,maxgesture_yi);
	return 0;
}
