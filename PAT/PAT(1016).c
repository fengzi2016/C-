#include<stdio.h>
#include<math.h>
int main(){
	int sum,a,b,A,B,m;
	int count1,count2;
	count1=count2=0;
	sum=0;
	int weishu(int n);
	int i,j,k,t;
	scanf("%d",&a);
	int weia,weib;
	weia=weishu(a);
	int s1[weia];
	for(i=weia-1;i>=0;i--){
		s1[i]=a%10;
		a/=10;
	}
	scanf("%d",&A);
	scanf("%d",&b);
	weib=weishu(b);
	int s2[weib];
	for(i=weib-1;i>=0;i--){
		s2[i]=b%10;
		b/=10;
	}
	scanf("%d",&B);
	for(i=0;i<weia;i++){
		if(s1[i]==A)count1++;
	}
	for(i=0;i<weib;i++){
		if(s2[i]==B)count2++;
	}

	for(i=0,m=1;i<count1;i++){
		sum=sum+m*A;
		m=m*10;
	}
	for(i=0,m=1;i<count2;i++){
		sum=sum+m*B;
		m=m*10;
	}
	printf("%d",sum);
	
}
int weishu(int n){
	int m,i;
	int re;
	re=pow(10,10);
	m=1;
	for(i=0;i<re;i++){
		if(n/10!=0){
			m++;
			n=n/10;
		}
		else break;
	}
	return m;
}