#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
#include <Math.h>

//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置 (从0开始)。如果不存在，则返回  -1。
int main(){
	int strStr(string haystack, string needle);
	cout<<strStr("hello","ll");
}
int strStr(string haystack, string needle) {
        if (needle.length()==0) return 0;
		int hlen = haystack.length();
		int nlen = needle.length();
		int i,j,k;
		for(i=0;i<hlen;i++) {
			if(haystack[i]==needle[0]) {
				k = i;
				for(j=0;j<nlen;j++) {
					if(haystack[k++]!=needle[j]) {
						break;
					}
				}
				if(j==nlen) return k-j;
			
			}
		
			
		}
		return -1;
}