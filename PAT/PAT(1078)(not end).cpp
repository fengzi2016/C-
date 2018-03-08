
#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
using namespace std; 
int main(){
	void compresscode(string a);
	void decode(string a);
    string order;
    getline(cin,order);
    string str;
	getline(cin,str);
    if(order[0]=='C'){
    	decode(str);
    	
    }else if(order[0] == 'D'){
    	compresscode(str);
    	
    	
   }
}
void decode(string a){
	
	
	int i,j;
	string fina = "";
	int count=1;

	for(i=0;i<a.length();i++){
		for(j=i+1;j<a.length()+1;j++){
			if(a[i]==a[j]){
				count++;
			}
			if(a[i]!=a[j]&&count!=1){
		        cout<<count<<a[i];
				break;
			}else if(a[i]!=a[j]&&count==1){
					cout<<a[i];
					 break;
			}
		}
	i = j-1;
	count=1;

	}

}
void compresscode(string a){
	int i,j,t,k;
	int temp,kill,keepInt;
	for(i=0;i<a.length();){
			k=1;
			temp=0;
			kill=1;
			if(isdigit(a[i])){
				j=i+1;
				while(isdigit(a[j])){
					k++;
					j++;
				}
				for(t=0;t<k;t++){
					keepInt = a[j-t-1]-'0';
					temp += keepInt*kill;
					kill *=10;
				}
				for(t=0;t<temp;t++){
					cout<< a[j];
				}
					i=i+k+1;
			}else{
				cout<<a[i];
				i++;
			}	
	}
}