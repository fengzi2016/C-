#include<stdio.h>
int main(){
	int i,j,count,flag,k;
	long int n;
	flag=1,count=0;k=0;
	scanf("%d",&n);
	long long int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[i]&&j<i)
			  flag=0;
			if(a[j]<a[i]&&j>i)
              flag=0;
		   }
		   if(flag==1){
  			  count++;
			  b[k++]=a[i];		
    	   } 
		   flag=1;							 
	 }
	 printf("%d\n",count);
	 for(i=0;i<k;i++)
	 printf("%d ",b[i]);
	 printf("\b");
	 return 0;		
}/*超时了*/