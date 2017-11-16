#include<iostream>
#include<stdio.h>
#include<fstream>  
#include<string>
using namespace std;
int main(){
	int i,j=0;
	string jinzhi;
	string number1;
	string number2;
	cin>>jinzhi>>number1>>number2;
	int result[jinzhi.length()];
	int len1=number1.length(),len2=number2.length(),len0=jinzhi.length(); 
	while(len1--&&len2--){
		if(len1!=number1.length()-1){
			result[j++]=((number1[len1]-'0'+number2[len2]-'0')+(number1[len1+1]-'0'+number2[len2+1]-'0')/jinzhi[--len0])%(jinzhi[len0]);
		}else{
			result[j++]=(number1[len1]-'0'+number2[len2]-'0')%(jinzhi[--len0]);
		} 	
	}
	while(len1!=0){
		result[j++]=(number1[0]-'0'+number2[len2--]-'0')%jinzhi[--len0];
	}
	
}

// #include <bits/stdc++.h>

// using namespace std;
// void Inverted(char *a,int *numa)//转化函数
// {
//     for(int i=strlen(a)-1,j=0; i>=0; i--,j++)
//         numa[j]=a[i]-'0';
// }

// int main()
// {
//     int temp,numa[25]= {0},numb[25]= {0},numc[25]= {0},flag=0,i;
//     char a[25],b[25],c[25];
//     cin>>a>>b>>c;
//     Inverted(a,numa);
//     Inverted(b,numb);
//     Inverted(c,numc);

//     for(int i=0; i<25; i++)//numa[]用来存储进制，控制0代表10进制
//         if(numa[i]==0)
//             numa[i]=10;

//     for(int i=0; i<25; i++)//加法实现，用numb[]来存储要输出的结果
//     {
//         temp=numb[i]+numc[i]+flag;
//         numb[i]=temp%numa[i];
//         flag=temp/numa[i];
//     }

//     for(i=24;i>=0; i--)//控制结果输出
//     {
//         if(numb[i]!=0)break;
//         if(numb[i]==0)numb[i]=-1;
//     }

//     if(i==-1)printf("0");//如果结果全部为0输出0.
//     for(; i>=0; i--)//输出答案
//         printf("%d",numb[i]);
//     return 0;
// }
