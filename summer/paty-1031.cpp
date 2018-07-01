#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
int shuzhi(char a) {
	int i = a - '0';
	return i;
}
bool numb(int a) {
	
	if(a>9||a<0){
		return false;
	}
	return true;
}
int main() {
	int weights[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char Mu[11] = {
		'1', '0', 'X', '9' ,'8','7','6','5','4','3','2' 
	};
	int n ;
	int i,j,k;
	cin>>n;
	char a[n][18];
	for(i=0;i<n;i++) {
		for(j=0;j<18;j++) {
			cin>>a[i][j];	
		}
	}
	int pass = 0;
	int m;
	int sum ;
	for(i=0;i<n;i++) {
		
		sum = 0;
		for(j=0;j<17;j++) {
		  if(!numb(shuzhi(a[i][j]))) {
		  		for(k=0;k<18;k++) {
		  			cout<<a[i][k];
		  			if(k==17&&i!=n-1)cout<<endl;
		  		}
  				break;
  			}
 			
		  sum += shuzhi(a[i][j])*weights[j];
		}
		
		int test = sum%11;
		char c = Mu[test];
		if(a[i][17]==c) {
			pass ++;
		}else{
			for(k=0;k<18;k++) {
		  			cout<<a[i][k];
		  			if(k==17&&i!=n-1)cout<<endl;
 			}
		}
	}
	
	if(pass == n) cout<<"All passed";
}