﻿#include<stdio.h>
	struct Student{
		char name[11];
		char number[11];
		int score;
	};
int main(){
	int n,i,j;
	scanf("%d",&n);
	struct Student stu[n];
	struct Student temp;
	for(i=0;i<n;i++){
		scanf("%s%s%d",stu[i].name,stu[i].number,&stu[i].score);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
			if(stu[j].score>stu[i].score){
					temp=stu[i];
					stu[i]=stu[j];
					stu[j]=temp;
			}
	}
	printf("%s %s\n",stu[0].name,stu[0].number);
	printf("%s %s",stu[n-1].name,stu[n-1].number);
	return 0;	
} 