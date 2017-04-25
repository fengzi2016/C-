#include<stdio.h>
int main(){
	int a[2][17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int b[17],i,j,k,t;
	k=1;j=0;i=0;
	while(j<17){
		if(a[0][i]!=0){
			while(i==17)i=0;
			while(k==7){
				a[0][i]=0;
				b[j]=a[1][i];
				j++;k=0;	
			}
			i++;k++;
		
		}
		else{
			i++;
			while(i==17) i=0;
		}
	}
	for(j=0;j<17;j++)
	printf("%d ",b[j]);
	return 0;
}