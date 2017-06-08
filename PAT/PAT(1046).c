#include<stdio.h>
int main(){
	int n,i,j,count_a,count_b;
	count_a=0;count_b=0;
	scanf("%d",&n);
	int a[n][4];
	for(i=0;i<n;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
			if(a[i][0]+a[i][2]==a[i][1]&&a[i][0]+a[i][2]!=a[i][3])
				++count_a;
			if(a[i][0]+a[i][2]==a[i][3]&&a[i][0]+a[i][2]!=a[i][1])
				++count_b;
		
	}
	printf("%d %d",count_b,count_a);
	return 0;
} 