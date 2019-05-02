#include<stdio.h>

int main(){
	int N;
	int num;
	
	while(scanf("%d",&N)!=EOF){
		int A1=0;
		int fuhao=1,A2=0,panduan=0;
		int A3=0;
		double A4=0.0,tongji=0.0;
		int A5=0,zuidashu=-1;
		
		while(N--){
			scanf("%d",&num);
			
			
			if(num%5==0){
				if(num%2==0)
				A1+=num;
			}
			
			if(num%5==1){
				A2=fuhao*num+A2;
				fuhao= -fuhao;	
				panduan++; //一定要记得A2有可能会因为相加等于0，所以要让不能用A2等于0来判断数字不存在
			}
			
			
			if(num%5==2)
			A3++;
			
			
			if(num%5==3){
				A4+=num;
				tongji++;
			}
			
			
			if(num%5==4){
				if(zuidashu<num)
				zuidashu=num;
			}
		}
		
		if(A1==0) printf("N ");
		else printf("%d ",A1);
		if(panduan==0) printf("N ");
		else printf("%d ",A2);
		if(A3==0) printf("N ");
		else printf("%d ",A3);
		if(A4==0) printf("N ");
		else printf("%.1f ",A4/tongji);
		if(zuidashu==-1) printf("N\n");
		else printf("%d\n",zuidashu);
	}
	return 0;
}
