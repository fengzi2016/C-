﻿#include<stdio.h>
int main(){
	int i,j,temp;
	int a[10];
	for(i=0;i<10;i++)
	{	
	scanf("%d",&a[i]);	
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(a[0]!=0){} 
 	else{
 		 for(i=1;i<10;){
			if(a[i]==0)i++;
			else{
			a[0]=a[i];
			a[i]=0;
			break;
			}
 		 }
	} 
	for(i=0;i<10;i++)
	printf("%d",a[i]);
}