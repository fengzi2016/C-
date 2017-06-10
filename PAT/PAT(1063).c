#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,x,y;
	float temp;
	scanf("%d",&n);
	int a[n][2];
	float b[n];
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}			
	}
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			x=a[i][0]*a[i][0];
			y=a[i][1]*a[i][1];
			b[i]= sqrt(x+y);
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(b[i]<b[j]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("%3.2f",b[0]);
	return 0;
} 