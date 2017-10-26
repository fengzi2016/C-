# include <iostream>
# include <math.h>
# include<fstream>  
using namespace std;
int main(){
	bool isShushu(int n);
	bool inArr(int *a,int n,int len);
	int index(int *a,int n,int len);
	int weishu(int n);
	int num;
	cin>>num;
	int arr[num+1],brr[num+1];
	int i,j;
	arr[0]=num;
	for(i=1;i<num+1;i++){
		cin>>arr[i];
	}
	cin>>brr[0];
	for(j=1;j<num+1;j++){
			cin>>brr[j];
			
	}	
	int zoreNum;
	for(j=1;j<num+1;j++){
		for(zoreNum=0;zoreNum<=(4-weishu(brr[j]));zoreNum++)
				 	cout<<"0";
		if(index(brr,brr[j],num+1)!=j&&inArr(arr,brr[j],num+1)){
			cout<<brr[j]<<": Checked";
		}
			else if(arr[1]!=brr[j]&&isShushu(index(arr,brr[j],num+1))){
				cout<<brr[j]<<": Minion";
			}else if(inArr(arr,brr[j],num+1)&&!isShushu(index(arr,brr[j],num+1))){
				cout<<brr[j]<<": Chocolate";
			}else if(arr[1]==brr[j]){
				cout<<brr[j]<<": Mystery Award";
			}else if(!inArr(arr,brr[j],num+1)){
				cout<<brr[j]<<": Are you kidding?";
			}
			if(j!=num)
			cout<<endl;
	}
}
	bool isShushu(int n){
		int i=sqrt(n);
		for(;i>1;i--){
			if(n%i==0){
				break;
			}
		}
		if(i==1)return true;
		return false;
	}
	bool inArr(int *a,int n,int len){
	   int i;
	   for(i=1;i<len;i++,a++){
	  
   		if(*a==n){
   			 	
		   	 return true;
		   	 
		   }
   		}
   		return false;
	}
	int index(int *a,int n,int len){
 		int i;
	   for(i=1;i<len;i++,a++){
   		if(*a==n){
		   	 return  i;
		   }
   		}
   		return -1;
	}
	int weishu(int n){
		int i=1;
		while(n%10){
			n=n/10;
			i++;
		}
		return i;
	}
