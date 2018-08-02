#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
int main(){
	   int lengthOfLongestSubstring(string s);
	   cout<<lengthOfLongestSubstring("abcabcbb");
}
bool has(char c[], char ch, int n) {
	int i;
	for(i=0;i<n;i++) {
		if(c[i]==ch)return true;
	}
	return false;
}
    
int lengthOfLongestSubstring(string s) {
	if(s.length()==0)return 0;
      int count = 0;
	  int maxCount = count;
	  int len = s.length();
	  int i,j,k;
	  k = 0;
	  char cArr[len];
	  for(i=0;i<len;i++) {
	  	
	  	if(!has(cArr,s[i],k)) {
	  		
		  		count ++;
		  		cArr[k++] = s[i];
		  		
		  		
		  	} else {
	  			if(count>maxCount) {
			  		maxCount = count;
			  	}
			  	i -= k;
			  	count = 0;			  	
  			    k = 0;
	  		}
	  	}
	  
	if(count>maxCount) {
		maxCount = count;
 	}
			  	
  	if(maxCount==0 && len>0) {
	  maxCount = 1;
	}
  		return  maxCount;
}