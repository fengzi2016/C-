﻿# include <iostream>
# include <math.h>
# include<fstream>  
using namespace std;
int main(){
	int Aarr[100];
	int Barr[100];
	int i=0,j=0;
	char spac;
	char str,str2;
	str=getchar();
	while(str!=' '){
		Aarr[i++]=str-'0';
		str=getchar();	
	}
 	str=getchar();
	while(str!='\n'){
		Barr[j++]=str-'0';
		str=getchar();	
	}
	int cha1,m,yu,cha2;
	if(j>i) cha1=j-i;
	int k,t=1;
	for(k=0;k<cha1;k++){
		cout<<Barr[k];
	}
	int resultArr[i];
	m=0;
	for(k=j-1;k>=cha1;k--,t++){
		if(t%2!=0){
			cha2=Barr[k]+Aarr[k-cha1];
			yu=cha2%13;
		}else{
			yu=(Barr[k]-Aarr[k-cha1]);
			if(yu<0)yu=yu+10;
		}
		resultArr[m++]=yu;
	}
	for(m=i-1;m>=0;m--){
			if(resultArr[m]==10){
				cout<<'J';
			}else if(resultArr[m]==11){
				cout<<'Q';
			}else if(resultArr[m]==12){
				cout<<'K';
			}else{
				cout<<resultArr[m];
			}
	}
}