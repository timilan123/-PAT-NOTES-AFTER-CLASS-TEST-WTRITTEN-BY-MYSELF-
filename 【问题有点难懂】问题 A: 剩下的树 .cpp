#include<stdio.h>
int main(){
int L,M;
while(scanf("%d %d",&L,&M),L!=0&&M!=0){//输入0 0就退出 

int tree[10000];//用数组下标来表示树的位置，用1和0表示种没种树 
int a,b;//用来记录每组输入的数字 
int count=0;//用来记录剩下了多少棵树 

for(int i=0;i<=L;i++){//这里也可以用fill函数
	tree[i]=1;
} 
//（1表示有树）该循环表示往0到L种满树 ，共L+1棵 

for(int i=1;i<=M;i++){ //这里也可以用while(M--)或者while(--(M+1)) 
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++){
		tree[i]=0;
	}
}
//该循环表示每次根据输入的那一对数字进行树的移除 

for(int i=0;i<=L;i++){
	if(tree[i]==1)
	++count;
} 
//遍历种了数的范围，如果有树count就加1 

printf("%d\n",count);
}

	return 0;
}


