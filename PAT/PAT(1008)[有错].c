﻿#include<stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	j=n+m;
	int a[j];
	for(i=m;i<n+m;i++){
		scanf("%d",&a[i]);
	}
	for(i=n+m-1,j=m-1;i>=n-1;i--){
		a[j--]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d%c",a[i],(n-1-i)!=0?' ' : '\0');
		//printf("%d ",a[i]);
	}
}                                