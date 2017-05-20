#include<stdio.h>
int main(){
	int n,i,j,m;
	char ch;
	scanf("%d ",&n);
	scanf("%c",&ch);
	if(n%2==0)m=n/2;
	else m=(n+1)/2;
	for(i=0;i<m;i++){
		if(i==0||i==m-1){
			for(j=0;j<n;j++)
				printf("%c",ch);
		}
		else{
			for(j=0;j<n;j++){
				if(j==0||j==n-1){
					printf("%c",ch);
				}
				else printf(" ");				
			}
			
		}printf("\n");		
			
	}
	return 0;
	
} 