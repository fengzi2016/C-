﻿#include<stdio.h>
int main(){
	int j,temp,n,count;
	int qiuhe(int x);
	scanf("%d",&n);
	int a[n];
	int i;
	int b[n],c[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=qiuhe(a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]>b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	count=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(b[i]==b[j]){
				b[j]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(b[i]!=0)count++;	
	}
	printf("%d\n",count);
	for(i=0;i<n;i++){
		if(b[i]!=0)
			printf("%d ",b[i]);
	}
	printf("\b");
	return 0;
}
	
int qiuhe(int x){
	int a[4]={0};
	int z,i;
	z=0;
	for(i=0;i<4;i++){
		a[i]=x%10;
		x=x/10;
		z=z+a[i];
	}
	return z;
}
/*
#include <stdio.h>
int main()
{
    int N, m, sum, friendID[37] = {0}, count = 0;
	int i;
    scanf("%d", &N);
    for( i= 0; i < N; i++)
    {
        scanf("%d", &m);
        for(sum = 0; m; m /= 10) sum += m % 10;
        if(!friendID[sum]) {friendID[sum] = 1; count++;}
    }

    printf("%d\n", count);
    for(i = 1; i < 37; i++)
		 if(friendID[i])
        	printf("%d%c", i, --count ? ' ' : '\0');
    return 0;
}

*/