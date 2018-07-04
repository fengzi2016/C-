#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
int main(){
	 string longestCommonPrefix (vector<string>& strs);
	 string myarray[3] = {"flower","flow","flight"};  
     vector<string> myvector(myarray , myarray+3);  
	 cout<<longestCommonPrefix(myvector);
}
string longestCommonPrefix(vector<string>& strs) {
		int i,j;
        int n = strs.size();
        if(n==0)return "";
        char temp;
        string commonStr = "";
        int flag = 0;
        for(i=0;i<strs[0].length();i++) {
        	temp = strs[0][i];
        	for(j=1;j<n;j++) {
	        	if(temp!=strs[j][i]){
	        		flag = 1;
	        	}
	        }
	        
	        if(flag == 0) commonStr += temp;
	        else return commonStr;
        }
        return commonStr;
}
