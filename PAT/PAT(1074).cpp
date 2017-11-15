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
