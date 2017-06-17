#include<stdio.h>
#include<math.h>
int main(){
	int m,n,count,b,flag,j,i;
	scanf("%d%d",&m,&n);
	count=0;
	for(i=2;i<20000;i++){
		b=sqrt(i);
		flag=0;
		for(j=2;j<=b;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			count++;
			if(count>=m&&count<=n){
				printf("%d",i);
				if((count-m+1)%10!=0||count==m)
					printf(" "); 
				if((count-m+1)%10==0&&m!=count)	
					printf("\n");
			}
		}
	}
	printf("\b");
}
	
	
			


