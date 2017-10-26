# include <iostream>
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
	int cha,m;
	if(j>i) cha=j-i;
	for(m=0;m<cha;m++){
		Aarr[i+m]=0;
	}
/*	cout<<"Aarr:";
	for(k=0;k<i;k++){
		cout<<Aarr[k];
	}
	cout<<"\n";
	cout<<"Brr:";
	for(k=0;k<j;k++){
		cout<<Barr[k];
	}*/
	int k,t;
	int chu;
	for(k=0;k<j;k++){
		if(j%2==0){	
			 if(k%2!=0){ 
			chu=(Aarr[k]+Barr[k])%13;
          }else{
			chu=(Barr[k]-Aarr[k]);
			if(chu<0)chu=chu+10;
		  } 
		}else{
		  if(k%2==0){ 
			chu=(Aarr[k]+Barr[k])%13;
          }else{
			chu=(Barr[k]-Aarr[k]);
			if(chu<0)chu=chu+10;
		  } 
	    } 
	    if(chu==10){
				cout<<'J';
			}else if(chu==11){
				cout<<'Q';
			}else if(chu==12){
				cout<<'K';
			}else{
				cout<<chu;
			}
	s	}	
}