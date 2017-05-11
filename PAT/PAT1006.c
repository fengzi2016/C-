#include<stdio.h>
int main() {
	int n,i,j,bai,shi,ge;
	scanf("%d",&n);
	ge=n%10;
	shi=n/10%10;
	bai=n/100;	
	for(j=0;j<bai;j++)
	printf("B");
	for(j=0;j<shi;j++)
	printf("S");
	for(j=1;j<=ge;j++)
	printf("%d",j);
	return 0;
}