
#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
#include <math.h>
using namespace std; 
int main(){
	
	int len1,len2,i,j;
	cin>>len1;
	len1 = len1 * 2 ;
	float arr1[len1] ;
	for(i=0;i<len1;i++){
		cin>>arr1[i];
	}
	cin>>len2;
	len2 = len2 * 2;
	float arr2[len2];
	for(i=0;i<len2;i++){
		cin>>arr2[i];
	}
	float zhishuArr[20],xishuArr[20];
	int count = 0;
	i = 0,j=0;
	int k = 0,t=0;
	while(i<=len1-1&&j<=len2-1){
		if(arr1[i]>arr2[j]){
			zhishuArr[k++]=arr1[i+1];
			xishuArr[t++] = arr1[i];
			i = i+2;
			count ++ ;
			
		}else if(arr1[i]==arr2[j]){
			zhishuArr[k++] =  arr1[i+1]+arr2[j+1];
			xishuArr[t++] =  arr1[i];
		    i = i+2;
		    j = j+2;
		    count ++ ;
		    
		}else{
			zhishuArr[k++] =  arr2[j+1];
			xishuArr[t++] =  arr2[j];
		    j = j+2;
		    count ++;
			
		}
	
	}
	if(len1>i) {
		zhishuArr[k++] =  arr1[i+1];
		xishuArr[t++] =  arr1[i];
		i = i + 2;
		count ++;
	}
	if(len2>j){
		zhishuArr[k++] =  arr2[j+1];
		xishuArr[t++] =  arr2[j];
		j = j+2;
		count ++;
	}
	if(count != 0)
		cout<<count<<" ";
		
	for(i=0;i<count;i++){
		if(zhishuArr != 0){
			
			cout<<xishuArr[i]<<" "<<zhishuArr[i];
			if(i!=count-1) cout<<" ";
		}
		
		
		
	}
	
}
 