#include<stdio.h>
#include<math.h>
int main(){
	int i,n,j;
	scanf("%d",&n);
    double a[n][3];
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			scanf("%lf",&a[i][j]);		
		}
		if(a[i][0]+a[i][1]>a[i][2])
			printf("Case #%d: ture\n",i+1);
			else printf("Case #%d: false\n",i+1);					
	}
	return 0;
	
} 