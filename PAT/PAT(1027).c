#include<stdio.h>
int main(){
	int i;
	char ch;int s[10]={0};
	while(scanf("%c", &ch) && ('\n' != ch)){
		switch (ch){
			case '0':s[0]++;break;
			case '1':s[1]++;break;
			case '2':s[2]++;break;
			case '3':s[3]++;break;
			case '4':s[4]++;break;
			case '5':s[5]++;break;
			case '6':s[6]++;break;
			case '7':s[7]++;break;
			case '8':s[8]++;break;
			case '9':s[9]++;break;
			default:break;
			
		}	
	}
	for(i=0;i<10;i++){
		if(s[i]!=0){
			printf("%d:%d",i,s[i]);
			printf("\n");
		}
	
	}
	return 0;
		
}