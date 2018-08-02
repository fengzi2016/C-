/*给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串
输入: ["eat", "tea", "tan", "ate", "nat", "bat"],
/*输出:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]*/
//思路：先排序，再选出一样的
#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>
using namespace std;
int main(){
	  vector<vector<string> > groupAnagrams(vector<string>& strs);
	  string sortWords(string a);
	  string arr[6] = {"eat", "tea", "tan", "ate", "nat", "bat"};
	  vector<string> strs ;
	  int i;
	  for(i=0;i<6;i++){
  		strs.push_back(arr[i]);
  		
  	}
  	 
	  groupAnagrams(strs);
}
string sortWords(string a) {
	int i,j;
	for(i=0;i<a.length();i++) {
		for(j=i+1;j<a.length();j++) {
			if(a[i]>a[j]) {
				swap(a[i],a[j]);
			}
		}
	}
	return a;
}
 vector<vector<string> > groupAnagrams(vector<string>& strs) {
 	 int n = strs.size();
 	 vector<string> tempArr = strs;
 	 vector<vector<string> > resultArr;
 	 int i,j,k;
 	 
	
 	 for(i=0;i<n;i++) {
 	 
 	 	tempArr[i] = sortWords(tempArr[i]);
 		
 	 }
 	 int kinds[n];
     int flags[n];
 	 for(i=0;i<n;i++) {
 	 	for(j=0;j<n;j++) {
	 	 	if(tempArr[i]==tempArr[j] && flags[j]!=-1) {
	 	 	
	 	 		kinds[j] = i;
	 	 		flags[j] = -1;
	 	 	}
	 	 }
 	 }
 	 

 	 for(i=0;i<n;i++) {
 	 	vector<string> tArr;
 	 
 	 	if(flags[i]==-1) {
	 	 	for(j=i;j<n;j++) {
		 	 	if(kinds[i]==kinds[j]&& flags[j] == -1) {
		 	 		string temp = strs[j];
		 	 	
		 	 	  	tArr.push_back(temp);
		 	 		flags[j] = 0;
	 	 			
		 	 	
		 	 	} 
		 	 }
		 	 
		 	 resultArr.push_back(tArr);
	 	 }
	 	 
 	 
 	 }	 
 	 
 	 return resultArr;
 }