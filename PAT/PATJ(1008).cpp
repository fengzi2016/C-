#include <iostream>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int time = 0;
	int arr[n];
	int last = 0;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		int sum = 0;
		if(arr[i]>last){
			sum = (arr[i]-last)*6+5; 
			last = arr[i];
		}else if(arr[i]<last){
			sum = (last-arr[i])*4+5;
			last = arr[i];
		}else if(arr[i]==last){
			sum = 5;
		}
		time += sum;
	}
	cout<<time;
} 