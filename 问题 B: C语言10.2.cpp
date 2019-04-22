//冒泡排序的简化版
#include<stdio.h>
int  main(){
int a,b,c,x;
scanf("%d %d %d",&a,&b,&c);
int *p1=&a,*p2=&b,*p3=&c,*temp=&x;
if(*p1<*p2){*temp=*p1;*p1=*p2;*p2=*temp;}
if(*p2<*p3){*temp=*p2;*p2=*p3;*p3=*temp;}
if(*p1<*p2){*temp=*p1;*p1=*p2;*p2=*temp;}
printf("%d %d %d",*p1,*p2,*p3);
return 0;
}

