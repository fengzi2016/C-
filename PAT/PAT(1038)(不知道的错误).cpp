#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int allNum,i,j;
	int findNum;
	int compute(int arr[],int score,int len);
	cin>>allNum;
	int scroesArr[allNum];
	for(i=0;i<allNum;i++){
		cin>>scroesArr[i];
	}
	cin>>findNum;
	int findScoreArr[findNum];
	for(j=0;j<findNum;j++){
		cin>>findScoreArr[j];
	}
	for(j=0;j<findNum;j++){
		cout<<compute(scroesArr,findScoreArr[j],allNum)<<" ";
	}
	cout<<"\b";	
}
int compute(int arr[],int score,int len){
	int i,j=0;
	for(i=0;i<len;i++){
		if(arr[i]==score){
			j++;
		}
	}
	return j;
}