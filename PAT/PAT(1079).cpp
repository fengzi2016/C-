#include <iostream>
#include <string>
#include <fstream>
#include <ctype.h>
using namespace std; 
int main(){
	int first,sum,count = 0;
	int produceReserveNumber(int n);
    bool isPalindromic(int n);
	//void Print(int n,int m,int sum);
	cin>>first;
	cout<< produceReserveNumber(first);
	
/*	sum =  first + produceReserveNumber(first);
	while(!isPalindromic(sum)){
		Print(first,produceReserveNumber(first),sum);
		count++;
		if(count==10){
			printf("Not found in 10 iterations.");
			break;
		}
	}*/		 
} 
int produceReserveNumber(int n){
	int array[10]={0};
	int i=0,j,k=1;
	int sum = 0;
	while(n){	
		array[i] = n%10;
		n /= 10 ;
		i++;
	}
	for(j=i-1;j>=0;j--){
		sum +=array[j]*k;
		k *=10;
	}
	
	return sum;
}
bool isPalindromic(int n){
	int array[10]={0};
	int i=0,j,k=1;
	int sum = 0;
	while(n){	
		array[i] = n%10;
		n /= 10 ;
		i++;
	}
	int arr[i];
	for(j=0;j<i;j++){
		arr[j]=array[i];
	}
	int m,n; 
	n=j/2;
	for(m=0;m<=n;m++){
		if(arr[m]!=arr[j-m]){
			return false;
		}
	}
	return true;
	
}