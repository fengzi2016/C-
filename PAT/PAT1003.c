#include<stdio.h>
#include<string.h>
int main(){
	int i,j,k,n,posT,posP;
	int countP,countA,countT;
	char a[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
			countP=countA=countT=0;
			gets(a);
			for(j=0;j<strlen(a);j++){
				if(a[j]=='P') {
					countP++;
					posP=j;
				}
				if(a[j]=='T'){
					countT++;
					posT=j;		
				}
				if(a[j]=='A')
					countA++;
			}
			/*middleA=posT-posP-1;
			leftA=posP;
			rightA=leftA*middleA;
			rightA=strlen(a)-posT-1;
			*/
			if(countP+countA+countT != strlen(a) || posT-posP<=1 || countP>1 || countT>1 || posP*(posT-posP-1)!=strlen(a)-posT-1)
			printf("NO\n");
			else printf("YES\n");
		}

}  