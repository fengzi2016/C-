#include <bits/stdc++.h>

 using namespace std;
 void Change(char *stringArray,int *numArray){
 	int len,i;
 	for(stringArray,i=0;i<stringArray.length();stringArray++,i++){
	 	*numArray=*stringArray-'0';
	 }
 }
 int main(){
 	int i;
 	char stringJinZhi[25]={0},stringA[25]={0},stringB[25]={0};
 	cin>>stringJinZhi>>stringA>>stringB;
 	int numberJinZhi[25],numberA[25],numberB[25],results[25];
 	Change(stringJinZhi,numberJinZhi);
 	Change(stringA,numberA);
 	Change(stringB,numberB);
 	for(i=0;i<25;i++){
	 	if(numberJinZhi[i]==0){
	 		numberJinZhi[i]=10;
	 	}
	 }
	 int quotien=0;
	 int sum,dict;
	 for(i=24;i>=0;i--){
 		sum=numberA[i]+numberB[i]+quotien;
 		results[i]=sum%numberJinZhi[i];
 		quotien=sum/numberJinZhi[i];
 	}
 	for(i=24;i>0;i--){
	 	if(numberJinZhi[i]!=0)break;
	 }
	 if(i==-1)printf("0");
     for(; i>=0; i--)
         printf("%d",[i]);
     return 0;
 }
 /*
void Inverted(char *a,int *numa)//转化函数
 {
     for(int i=strlen(a)-1,j=0; i>=0; i--,j++)
         numa[j]=a[i]-'0';
 }

 int main()
 {
     int temp,numa[25]= {0},numb[25]= {0},numc[25]= {0},flag=0,i;
     char a[25],b[25],c[25];
     cin>>a>>b>>c;
     Inverted(a,numa);
     Inverted(b,numb);
     Inverted(c,numc);

     for(int i=0; i<25; i++)//numa[]用来存储进制，控制0代表10进制
         if(numa[i]==0)
             numa[i]=10;

     for(int i=0; i<25; i++)//加法实现，用numb[]来存储要输出的结果
     {
         temp=numb[i]+numc[i]+flag;
         numb[i]=temp%numa[i];
         flag=temp/numa[i];
     }

     for(i=24;i>=0; i--)控制结果输出
     {
         if(numb[i]!=0)break;
         if(numb[i]==0)numb[i]=-1;
     }

     if(i==-1)printf("0");如果结果全部为0输出0.
     for(; i>=0; i--)输出答案
         printf("%d",numb[i]);
     return 0;
 }
*/