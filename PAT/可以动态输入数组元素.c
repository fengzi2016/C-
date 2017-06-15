#include<stdio.h>
int main(){
	int i;
	char ch;
	int a[10];
	i=0;
	do{
		scanf("%d",&a[i]);
		i++;
	}while((ch=getchar())!='\n');
	for(i=0;i<10;i++)
	printf("%d",a[i]);
	
	
	
	
}