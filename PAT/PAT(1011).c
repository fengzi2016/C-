#include<stdio.h>
int main(){
	int n,count,i,j;
	scanf("%d",&n);
	long int a[n][3];
	 for(i=0;i<n;i++){
 		for(j=0;j<3;j++){
		 	scanf("%ld",&a[i][j]);
		 }
 	}
 	count = 1;
 	for(i=0;i<n;i++){
	 	if(a[i][0]+a[i][1]>a[i][2])
	 		printf("Case #%d:ture\n",count++);
	 	else {
	 		printf("Case #%d:false\n",count++);
	 	}
	 		
	 }
	 return 0;
} 