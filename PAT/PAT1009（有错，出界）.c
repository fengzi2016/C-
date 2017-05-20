#include<stdio.h>
#include<string.h>
int main(){
	char *point_1,*point_2;
	char dayin(char *p,char *q);
	char ch[80];
	gets(ch);
	point_1=point_2=&ch[strlen(ch)-1];
	dayin(point_1,point_2);
	return 0;
}
char dayin(char *p,char *q){
	int temp;
	while(p>=0){
		while(*p!=' '&&q>=0){	
			p--;
		}
		q=temp=p+1;
		while(*q!=' '&&*q!='\0'){
			printf("%c",*q);	
			q++;		
		}
		printf(" ");
		p=q=temp-2;
		
	}	
	return 0;
}
