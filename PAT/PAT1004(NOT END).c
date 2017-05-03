#include<stdio.h>
#include<string.h>
int main(){
	int i,j,n,maxpos,minpos,x;
	scanf("%d\n",&n);
	char score[n],max,min;
	char a[n][25];
	for(i=0;i<n;i++){
		for(j=0;j<25;j++){
		a[i][j]=getchar();
	    if(a[i][j]=='\n')
		break;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<25;j++){
			if(a[i][j]=='\n'){
				for(x=3;x>0;x--)
				strcat(score[i],a[i][j-x]);
			}
		}
	}
	for(i=1;i<n;i++){
		 max=min=score[0];
		 /*if(score[i].strlen>max.strlen){max=score[i];maxpos=i;}
		 else if(score[i].strlen<max.strlen)maxpos=0;
		 else{
		 if(strcmp(score[i],max)>0)maxpos=i;
		 else if(strcmp(score[i],max)<0)minpos=i;*/
		 //错误	：strlen 取不到值	
	}
     for(j=0;a[maxpos][j]!='\0';j++)
     printf("%c",a[maxpos][j]);
     printf("\n");
     for(j=0;a[minpos][j]!='\0';j++)
     printf("%c",a[minpos][j]);
     return 0;
}

      
	