#include<stdio.h>
int main(){
	int n,i,s,xishu,jiao,count,j,count2,m,y;
	float sum;
	scanf("%d",&n);
	int a[n];
	i=0;s=0;xishu=1;jiao=0;
	count =0;sum=0;j=0;count2=0;
	while(n--){
		scanf("%d",&m);
		y=m%5;
		switch (y){
			case 0:if(m%2==0)s=s+m;break;
			case 1:jiao=xishu*m+jiao;xishu=(-1)*xishu;break;
			case 2:count ++;break;
			case 3:sum=sum+m;count2++;break;
			case 4:if(m>j)j=m;break;
			default: break;
		} 	
	}
	if(s==0)printf("N ");
	else printf("%d ",s);
	if(jiao==0)printf("N ");
	else printf("%d ",jiao);
	if(count==0)printf("N ");
	else printf("%d ",count);
	if(sum==0)printf("N ");
	else printf("%2.1f ",sum/count2);
	if(j==0)printf("N");
	else printf("%d",j);
}
