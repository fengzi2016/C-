﻿#include<stdio.h>
#include<stdlib.h>
//存5个学生的成绩，以及输出不及格的成绩 
int main(){
	void check(int *);
	int *p1,i;
	p1=(int *)malloc(5*sizeof(int));
	//开辟动态内存区，将地址转换成int *型，然后放在p1中
	/*
		p1=(int *)malloc(5*sizeof(int)); 
		malloc 是向系统申请内存空间的函数，返回值是*void
		(int *) 把malloc返回的指针强制转化为int *【此项可以省略】
		malloc的参数(5*sizeof(int))表示申请5个int 类型的字节数据空间 
	*/
	for(i=0;i<5;i++)
		scanf("%d",p1+i);
	check(p1);
	return 0;
}
void check(int *p){
	int i;
	printf("They are fail:");
	for(i=0;i<5;i++)
		if(p[i]<60)printf("%d ",p[i]);/*把p当作数组名*/
	printf("\n");
}