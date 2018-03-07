#include <stdio.h> 
#include <iostream.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std; 
int main(){
	char a[1000];
	string compresscode(string a);
	string decode(string a);
    char order;
    cin>>order;
    gets(a);
    if(order=='C'){
    	decode(a);
    }else if(order == 'D'){
    	
    	
    	
    }
}
string decode(char a[]){
	
	
	int i,j;
	string fina = "";
	int count=1,black_count = 1;
	for(i=0;a[i]!='/0';i++){
		for(j=i+1;a[j]!='/0';j++){
			if(a[i]==a[j]&&a[i]!=' '){
				count++;
			}else if(a[i]==a[j]&&a[i]==' '){
				black_count++;
			}
			if(a[i]!=a[j]&&count!=1){
		        cout<<count<<a[i];
				break;
			}
		 	if(a[i]!=a[j]&&black_count!=1){
		 		cout<<a[i];
				 break;
			}
			cout<<i;
		}
	i = j;
	j = i+1;
	count=1;
	black_count=1;
	}
	return fina;
	
}
string compresscode(string a){
	
}