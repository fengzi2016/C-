﻿#include<stdio.h>
int qian(){
	long int Calleon;
	int n,m,ch1,ch2,ch3,k;
	scanf("%ld",&Calleon);
	scanf("%c",&ch1);
	scanf("%d",&n);
	scanf("%c",&ch2);
	scanf("%d",&m);	
	k=(Calleon*17+n)*29+m;
	return k; 
}
int main(){
	int qian();
	int z,t,k,x,y,m,n;
	z=qian();
	k=qian();
	if(z>k){
		t=z-k;
		x=t/(17*29);
		y=t/29-17*x;
		m=t-x*17*29-y*29;		
		printf("-%d.%d.%d",x,y,m);
	}
	else if(z<k){
		t=k-z;
		x=t/(17*29);
		y=t/29-17*x;
		m=t-x*17*29-y*29;
		printf("%d.%d.%d",x,y,m);
	}	
	return 0;
}/*有一个错误，未找出*/