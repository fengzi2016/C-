/*思路：
	分为2组进行输入，将第一行和第二行的大写字母以及数字，第三行和第四行小写字母找出放入数组a[]，并分别用flag1，2，3记下第一行，第二行，第三行最后一个大写字母或数字或小写字母在a[]内的位置，再用i,j 的两个循环来找出相同字母或数字，最后输
*/
#include<stdio.h>
#include<string.h>
int main(){
	char src[60]={0};
	char a[60]={0};
	int i,j,n;
	int k=0;
	int flag1,flag2,flag3;
	for(i=0;i<2;i++){
		gets(src);
		j=0;
		while(src[j]!='\0'){
			if(src[j]>='A'&&src[j]<='Z'||src[j]>=0&&src[j]<=9)
					a[k++]=src[j];	
				j++;	
		}
		if(i==0)flag1=k;
		if(i==1)flag2=k;	
	}
	
	for(i=0;i<2;i++){
		gets(src);
		j=0;
		while(src[j]!='\0'){
			if(src[j]>='a'&&src[j]<='z')
				a[k++]=src[j];
			j++;	
		}
		if(i==0)flag3=k;
	} 
	int count=0;
	for(i=0;i<flag1;i++){
		for(j=flag1;j<flag2;j++){
			if(a[i]==a[j]){
				count++;
			if(count==1){
				switch (a[i]){
					case 'A':printf("MON");break;
					case 'B':printf("TUE");break;
					case 'C':printf("WED");break;
					case 'D':printf("THU");break;
					case 'E':printf("FRI");break;
					case 'F':printf("SAT");break; 
					case 'G':printf("SUM");break;
				}
			}
				if(count==2){
					int time;
					if(a[i]>=0&&a[i]<=9)
					printf(" %d",a[i]);
					else{
					time=a[i]-'A'+10;
					printf(" %d",time);
					}
				
				}
			}
		}
	}
	int flag=0;
		for(i=flag2;i<flag3;i++){
			for(j=flag3;j<k;j++){
				if(a[i]==a[j]){
					flag=1;
					int x;
					for(x=0;x<60;x++){
						if(a[i]==src[x])break;
					}
					if(x<10){
						printf(":0%d",x);
					}
					else{
						printf(":%d",x);
					} 					
				 }	 
		     }
		     if(flag==1)break;
	     }
   }
