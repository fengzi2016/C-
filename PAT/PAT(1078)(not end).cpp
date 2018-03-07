#include <stdio.h> 
#include <iostream.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <fstream>
using namespace std; 
int main(){
	string a;
	string compresscode(string a);
	string decode(string a);
    char order;
    cin>>order;
    cin>>a;
    if(order=='C'){
    	
    }else if(order == 'D'){
    	cout<<decode(a);
    	
    }
}
string decode(string a){
	int i,j;
	string fina = "";
	int count=1,black_count = 1;
	for(i=0;i<a.length();i++){
		for(j=i+1;j<a.length();j++){
			if(a[i]==a[j]&&a[i]!=' '){
				count++;
			}else if(a[i]==a[j]&&a[i]==' '){
				black_count++;
			}
			if(a[i]!=a[j]&&count!=1){
				count = count + '0'+a[i];
				fina + = count;
				break;
			}
		 	if(a[i]!=a[j]&&black_count!=1){
				 fina + =a[i];
				 break;
			}
		
		}
	i = j;
	j = i+1;
	
	}
	return fina;
	
}
string compresscode(string a){
	
}