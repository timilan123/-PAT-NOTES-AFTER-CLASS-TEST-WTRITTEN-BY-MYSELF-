#include<stdio.h>
int main(){
int L,M;
while(scanf("%d %d",&L,&M),L!=0&&M!=0){//����0 0���˳� 

int tree[10000];//�������±�����ʾ����λ�ã���1��0��ʾ��û���� 
int a,b;//������¼ÿ����������� 
int count=0;//������¼ʣ���˶��ٿ��� 

for(int i=0;i<=L;i++){//����Ҳ������fill�����������f 
	tree[i]=1;
} 
//��1��ʾ��������ѭ����ʾ��0��L������ ����L+1�� 

for(int i=1;i<=M;i++){ //����Ҳ������while(M--)����while(--(M+1)) 
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		tree[i]=0;
	}
}
//��ѭ����ʾÿ�θ����������һ�����ֽ��������Ƴ� 

for(int i=0;i<=L;i++){
	if(tree[i]==1)
	++count;
} 
//�����������ķ�Χ���������count�ͼ�1 

printf("%d\n",count);
}

	return 0;
}


