#include<stdio.h>
int main(){
	int n,flag,i;
	int pd(int x);
	i=0;
	scanf("%d",&n);
 	flag=pd(n);
	while(n!=1){
		if(flag==0){ n=n/2;i++;}
		else {n=(n*3+1)/2;i++;}
		flag=pd(n);
	}
	printf("%d",i);
	return 0;
}
int pd(int x){
	if((x%2)==1) return 1;
	else return 0;
}
 