﻿#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,k,count;
	int *p,*q;
	count=k=0;
	int b[10000]={0};
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=sqrt(i);j>1;j--){
			if(i%j==0)break;
		}
		if(j==1)b[k++]=i;
	}
	p=b;
	q=b+1;
	for(p=b,q=b+1;p<b+k-1,q<k+b;p++,q++){
		if(*q-*p==2)count++;
	}
	printf("%d",count);
	return 0;
}